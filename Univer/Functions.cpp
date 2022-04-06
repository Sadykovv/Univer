#include "Functions.h"
#include "Excel.h"



Functions::Functions()
{

}
void Functions::ConnectToDB()
{
	//Data Source=DESKTOP-887PGVF;Initial Catalog=TestDb;Integrated Security=True
	connStrinfBuilder = gcnew SqlConnectionStringBuilder();
	connStrinfBuilder->DataSource = "DESKTOP-887PGVF";
	connStrinfBuilder->InitialCatalog = "TestDb";
	connStrinfBuilder->IntegratedSecurity = true;

	conn = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));

}
void Functions::Insert(String^ FIO, String^ PhoneNumber, String^ Email, String^ Timing, bool Interior, bool Video4k, bool Airvideo, String^ Format, String^ Ideaofvideo)
{
	try
	{
		ConnectToDB();
		String^ cmdText = "INSERT INTO dbo.Table_1(FIO, PhoneNumber,"
			"Email, Timing, Interior, Video4k, Airvideo, Format, Ideaofvideo)"
			"VALUES(@FIOVstavka, @PhoneNumberVstavka, @EmailVstavka, @TimingVstavka,"
			"@InteriorVstavka, @Video4kVstavka, @AirvideoVstavka, @FormatVstavka,@IdeaofvideoVstavka)";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		cmd->Parameters->AddWithValue("@FIOVstavka", FIO);
		cmd->Parameters->AddWithValue("@PhoneNumberVstavka", PhoneNumber);
		cmd->Parameters->AddWithValue("@EmailVstavka", Email);
		cmd->Parameters->AddWithValue("@TimingVstavka", Timing);
		cmd->Parameters->AddWithValue("@InteriorVstavka", Interior);
		cmd->Parameters->AddWithValue("@Video4kVstavka", Video4k);
		cmd->Parameters->AddWithValue("@AirvideoVstavka", Airvideo);
		cmd->Parameters->AddWithValue("@FormatVstavka", Format);
		cmd->Parameters->AddWithValue("@IdeaofvideoVstavka", Ideaofvideo);

		conn->Open();
		cmd->ExecuteNonQuery();
	}
	finally
	{
		if (conn != nullptr)
		{
			conn->Close();
		}

	}
}

void Functions::select()
{
	try {
		ConnectToDB();
		
		String^ cmdText = "SELECT * FROM dbo.Table_1";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		conn->Open();
		Excel excel;
		SqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			int id = Convert::ToInt32(reader["Video4k"]);
			excel.fillTable(id, reader["FIO"]->ToString());
		}
		excel.close_File();
	}
	finally
	{
		if (conn != nullptr)
		{
			conn->Close();
		}

	}
	
}
SqlConnection^ Functions::getConn() {
	return conn;
}
SqlConnectionStringBuilder^ Functions::getSqlConnectionStringBuilder() {
	return connStrinfBuilder;
}

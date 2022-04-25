#include "Functions.h"
#include "Excel.h"



Functions::Functions()
{

}
void Functions::ConnectToDB()
{
	//Data Source=DESKTOP-887PGVF;Initial Catalog=TestDb;Integrated Security=True
	connStrinfBuilder = gcnew SqlConnectionStringBuilder();
	connStrinfBuilder->DataSource = "DESKTOP-UGB9IJG";
	connStrinfBuilder->InitialCatalog = "Test";
	connStrinfBuilder->IntegratedSecurity = true;

	conn = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));

}
void Functions::Insert(String^ FIO, String^ PhoneNumber, String^ Email, String^ Timing, bool Interior, bool Video4k, 
	bool Airvideo, String^ Format, String^ Ideaofvideo, String^ videoType, bool signLangInt, bool colorCorr, bool subtitles,
	bool music, bool localization, String^ locationLayout)
{
	try
	{
		ConnectToDB();
		String^ cmdText = "INSERT INTO dbo.Table_1(FIO, PhoneNumber,"
			"Email, Timing, Interior, Video4k, Airvideo, Format, Ideaofvideo, videoType, signLangInt,"
			"colorCorr, subtitles, music, localization, locationLayout)"
			"VALUES(@FIOVstavka, @PhoneNumberVstavka, @EmailVstavka, @TimingVstavka,"
			"@InteriorVstavka, @Video4kVstavka, @AirvideoVstavka, @FormatVstavka,@IdeaofvideoVstavka,"
			"@videoType,  @signLangInt, @colorCorr, @subtitles, @music, @localization, @locationLayout)";
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

		cmd->Parameters->AddWithValue("@videoType", videoType);
		cmd->Parameters->AddWithValue("@signLangInt", signLangInt);
		cmd->Parameters->AddWithValue("@colorCorr", colorCorr);
		cmd->Parameters->AddWithValue("@subtitles", subtitles);
		cmd->Parameters->AddWithValue("@music", music);
		cmd->Parameters->AddWithValue("@localization", localization);
		cmd->Parameters->AddWithValue("@locationLayout", locationLayout);

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
//Excel
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

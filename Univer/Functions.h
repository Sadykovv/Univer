#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
ref class Functions
{
public:
	Functions();

	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStrinfBuilder;
	void ConnectToDB()
	{
		//Data Source=DESKTOP-887PGVF;Initial Catalog=TestDb;Integrated Security=True
		connStrinfBuilder = gcnew SqlConnectionStringBuilder();
		connStrinfBuilder->DataSource = "DESKTOP-887PGVF";
		connStrinfBuilder->InitialCatalog = "TestDb";
		connStrinfBuilder->IntegratedSecurity = true;


		conn = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));

	}
public:void Insert(String^ FIO, String^ PhoneNumber, String^ Email, String^ Timing, bool Interior, bool Video4k, bool Airvideo, String^ Format, String^ Ideaofvideo)
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
};


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
public:void Insert(String^ FIO)
{
	try
	{
		ConnectToDB();
		String^ cmdText = "INSERT INTO dbo.Table_1(FIO) VALUES(@FIOVstavka)";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		cmd->Parameters->AddWithValue("@FIOVstavka", FIO);
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
public:void Insert2(String^ PhoneNumber)
{
	try
	{
		ConnectToDB();
		String^ cmdText = "INSERT INTO dbo.Table_1(PhoneNumber) VALUES(@PhoneNumberVstavka)";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		cmd->Parameters->AddWithValue("@FIOVstavka", PhoneNumber);
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


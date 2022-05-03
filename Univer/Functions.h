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
	void ConnectToDB();
	void Insert(String^ FIO, String^ PhoneNumber, String^ Email, String^ Timing, bool Interior, bool Video4k, 
		bool Airvideo, String^ Format, String^ Ideaofvideo, bool signLangInt, bool colorCorr, bool subtitles,
		bool music, bool localization, String^ locationLayout);
	SqlConnection^ getConn();
	SqlConnectionStringBuilder^ Functions::getSqlConnectionStringBuilder();
	void select();
private:
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStrinfBuilder;
};


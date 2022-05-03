#pragma once
#include "Functions.h"
namespace Univer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//Подсказки
			ToolTip^ location_layout = gcnew ToolTip();
			location_layout->SetToolTip(label3, "Сюда вы можете прикрепить ссылку\nна облачное хранилище, где будет\nхраниться сценарий, макеты, рисунки локаций и т.д.");

			ToolTip^ timming = gcnew ToolTip();
			timming->SetToolTip(label10, "Формат чч:мм:сс");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_FIO;
	private: System::Windows::Forms::TextBox^ textBox_Phone;
	protected:



	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ textBox_email;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox_interior;




	private: System::Windows::Forms::CheckBox^ checkBox_airvideo;

	private: System::Windows::Forms::ComboBox^ comboBox_format;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button_download;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_timing;
	private: System::Windows::Forms::CheckBox^ checkBox_subtitles;






	private: System::Windows::Forms::CheckBox^ checkBox_sign_lang_int;
	private: System::Windows::Forms::CheckBox^ checkBox_color_corr;
	private: System::Windows::Forms::CheckBox^ checkBox_localization;



	private: System::Windows::Forms::CheckBox^ checkBox_music;

	private: System::Windows::Forms::RichTextBox^ richTextBox_ideaofvideo;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_location_layout;


	private: System::Windows::Forms::TabControl^ tabControl1;


	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::CheckBox^ checkBox_4k;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_FIO = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Phone = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox_interior = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_airvideo = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox_format = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button_download = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_timing = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_subtitles = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_sign_lang_int = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_color_corr = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_localization = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_music = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox_ideaofvideo = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_location_layout = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox_4k = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_FIO
			// 
			this->textBox_FIO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_FIO->Location = System::Drawing::Point(222, 24);
			this->textBox_FIO->Margin = System::Windows::Forms::Padding(4);
			this->textBox_FIO->Name = L"textBox_FIO";
			this->textBox_FIO->Size = System::Drawing::Size(195, 26);
			this->textBox_FIO->TabIndex = 0;
			this->textBox_FIO->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_FIO_TextChanged);
			// 
			// textBox_Phone
			// 
			this->textBox_Phone->Location = System::Drawing::Point(222, 76);
			this->textBox_Phone->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Phone->Name = L"textBox_Phone";
			this->textBox_Phone->Size = System::Drawing::Size(195, 25);
			this->textBox_Phone->TabIndex = 1;
			this->textBox_Phone->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Phone_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 80);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Номер телефона";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(416, 18);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Опишите идею съемки";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox_email
			// 
			this->textBox_email->Location = System::Drawing::Point(222, 131);
			this->textBox_email->Margin = System::Windows::Forms::Padding(4);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(195, 25);
			this->textBox_email->TabIndex = 8;
			this->textBox_email->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_email_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(22, 135);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Электронная почта";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// checkBox_interior
			// 
			this->checkBox_interior->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_interior->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_interior->Location = System::Drawing::Point(328, 181);
			this->checkBox_interior->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_interior->Name = L"checkBox_interior";
			this->checkBox_interior->Size = System::Drawing::Size(262, 31);
			this->checkBox_interior->TabIndex = 0;
			this->checkBox_interior->Text = L"Свой интерьер";
			this->checkBox_interior->UseVisualStyleBackColor = true;
			this->checkBox_interior->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_interior_CheckedChanged);
			// 
			// checkBox_airvideo
			// 
			this->checkBox_airvideo->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_airvideo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_airvideo->Location = System::Drawing::Point(328, 236);
			this->checkBox_airvideo->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_airvideo->Name = L"checkBox_airvideo";
			this->checkBox_airvideo->Size = System::Drawing::Size(262, 55);
			this->checkBox_airvideo->TabIndex = 12;
			this->checkBox_airvideo->Text = L"Съемка с воздуха";
			this->checkBox_airvideo->UseVisualStyleBackColor = true;
			this->checkBox_airvideo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_airvideo_CheckedChanged);
			// 
			// comboBox_format
			// 
			this->comboBox_format->FormattingEnabled = true;
			this->comboBox_format->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Праздничное", L"Корпоративное", L"Промо видео",
					L"Другое"
			});
			this->comboBox_format->Location = System::Drawing::Point(222, 131);
			this->comboBox_format->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_format->Name = L"comboBox_format";
			this->comboBox_format->Size = System::Drawing::Size(160, 25);
			this->comboBox_format->TabIndex = 15;
			this->comboBox_format->Text = L"Праздничное";
			this->comboBox_format->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_format_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(22, 135);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 21);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Формат";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(22, 26);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 21);
			this->label8->TabIndex = 17;
			this->label8->Text = L"ФИО";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// button_download
			// 
			this->button_download->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_download->Location = System::Drawing::Point(366, 36);
			this->button_download->Margin = System::Windows::Forms::Padding(4);
			this->button_download->Name = L"button_download";
			this->button_download->Size = System::Drawing::Size(145, 37);
			this->button_download->TabIndex = 18;
			this->button_download->Text = L"Отправить";
			this->button_download->UseVisualStyleBackColor = true;
			this->button_download->Click += gcnew System::EventHandler(this, &MyForm::button_download_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(17, 48);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(122, 21);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Длительность";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox_timing
			// 
			this->textBox_timing->Location = System::Drawing::Point(222, 48);
			this->textBox_timing->Margin = System::Windows::Forms::Padding(4);
			this->textBox_timing->Name = L"textBox_timing";
			this->textBox_timing->Size = System::Drawing::Size(160, 25);
			this->textBox_timing->TabIndex = 22;
			this->textBox_timing->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_timing_TextChanged_1);
			// 
			// checkBox_subtitles
			// 
			this->checkBox_subtitles->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_subtitles->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_subtitles->Location = System::Drawing::Point(22, 169);
			this->checkBox_subtitles->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_subtitles->Name = L"checkBox_subtitles";
			this->checkBox_subtitles->Size = System::Drawing::Size(262, 55);
			this->checkBox_subtitles->TabIndex = 27;
			this->checkBox_subtitles->Text = L"Субтитры";
			this->checkBox_subtitles->UseVisualStyleBackColor = true;
			// 
			// checkBox_sign_lang_int
			// 
			this->checkBox_sign_lang_int->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_sign_lang_int->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_sign_lang_int->Location = System::Drawing::Point(22, 26);
			this->checkBox_sign_lang_int->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_sign_lang_int->Name = L"checkBox_sign_lang_int";
			this->checkBox_sign_lang_int->Size = System::Drawing::Size(262, 55);
			this->checkBox_sign_lang_int->TabIndex = 28;
			this->checkBox_sign_lang_int->Text = L"Сурдопереводчик";
			this->checkBox_sign_lang_int->UseVisualStyleBackColor = true;
			this->checkBox_sign_lang_int->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox_color_corr
			// 
			this->checkBox_color_corr->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_color_corr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_color_corr->Location = System::Drawing::Point(22, 106);
			this->checkBox_color_corr->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_color_corr->Name = L"checkBox_color_corr";
			this->checkBox_color_corr->Size = System::Drawing::Size(262, 55);
			this->checkBox_color_corr->TabIndex = 29;
			this->checkBox_color_corr->Text = L"Цветокор";
			this->checkBox_color_corr->UseVisualStyleBackColor = true;
			// 
			// checkBox_localization
			// 
			this->checkBox_localization->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_localization->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_localization->Location = System::Drawing::Point(328, 106);
			this->checkBox_localization->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_localization->Name = L"checkBox_localization";
			this->checkBox_localization->Size = System::Drawing::Size(262, 55);
			this->checkBox_localization->TabIndex = 30;
			this->checkBox_localization->Text = L"Дублирование";
			this->checkBox_localization->UseVisualStyleBackColor = true;
			// 
			// checkBox_music
			// 
			this->checkBox_music->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_music->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_music->Location = System::Drawing::Point(328, 26);
			this->checkBox_music->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_music->Name = L"checkBox_music";
			this->checkBox_music->Size = System::Drawing::Size(262, 82);
			this->checkBox_music->TabIndex = 31;
			this->checkBox_music->Text = L"Музыкальное сопровождение";
			this->checkBox_music->UseVisualStyleBackColor = true;
			// 
			// richTextBox_ideaofvideo
			// 
			this->richTextBox_ideaofvideo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_ideaofvideo->Location = System::Drawing::Point(420, 48);
			this->richTextBox_ideaofvideo->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox_ideaofvideo->Name = L"richTextBox_ideaofvideo";
			this->richTextBox_ideaofvideo->Size = System::Drawing::Size(312, 121);
			this->richTextBox_ideaofvideo->TabIndex = 32;
			this->richTextBox_ideaofvideo->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 252);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 21);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Макет локации";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox_location_layout
			// 
			this->textBox_location_layout->Location = System::Drawing::Point(22, 298);
			this->textBox_location_layout->Margin = System::Windows::Forms::Padding(4);
			this->textBox_location_layout->Name = L"textBox_location_layout";
			this->textBox_location_layout->Size = System::Drawing::Size(295, 25);
			this->textBox_location_layout->TabIndex = 35;
			this->textBox_location_layout->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(818, 629);
			this->tabControl1->TabIndex = 36;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox_FIO);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox_Phone);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox_email);
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(810, 599);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Данные для связи";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->splitContainer1->Location = System::Drawing::Point(3, 492);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button5);
			this->splitContainer1->Size = System::Drawing::Size(800, 100);
			this->splitContainer1->SplitterDistance = 266;
			this->splitContainer1->TabIndex = 39;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(366, 36);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 37);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Далее";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Controls->Add(this->checkBox_4k);
			this->tabPage2->Controls->Add(this->richTextBox_ideaofvideo);
			this->tabPage2->Controls->Add(this->textBox_timing);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->comboBox_format);
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(810, 599);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"О видео";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->splitContainer2->Location = System::Drawing::Point(3, 496);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->button2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->button3);
			this->splitContainer2->Size = System::Drawing::Size(804, 100);
			this->splitContainer2->SplitterDistance = 267;
			this->splitContainer2->TabIndex = 41;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 37);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(366, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 37);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Далее";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBox_4k
			// 
			this->checkBox_4k->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_4k->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_4k->Location = System::Drawing::Point(26, 191);
			this->checkBox_4k->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_4k->Name = L"checkBox_4k";
			this->checkBox_4k->Size = System::Drawing::Size(262, 82);
			this->checkBox_4k->TabIndex = 40;
			this->checkBox_4k->Text = L"4K съемка (первоначально съмка производится в FullHD";
			this->checkBox_4k->UseVisualStyleBackColor = true;
			this->checkBox_4k->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_4k_CheckedChanged_1);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage3->Controls->Add(this->splitContainer3);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->textBox_location_layout);
			this->tabPage3->Controls->Add(this->checkBox_music);
			this->tabPage3->Controls->Add(this->checkBox_airvideo);
			this->tabPage3->Controls->Add(this->checkBox_subtitles);
			this->tabPage3->Controls->Add(this->checkBox_sign_lang_int);
			this->tabPage3->Controls->Add(this->checkBox_localization);
			this->tabPage3->Controls->Add(this->checkBox_interior);
			this->tabPage3->Controls->Add(this->checkBox_color_corr);
			this->tabPage3->Location = System::Drawing::Point(4, 26);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(810, 599);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Дополнительно";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->splitContainer3->Location = System::Drawing::Point(3, 496);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->button_download);
			this->splitContainer3->Size = System::Drawing::Size(804, 100);
			this->splitContainer3->SplitterDistance = 267;
			this->splitContainer3->TabIndex = 42;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 37);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(818, 629);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(815, 662);
			this->Name = L"MyForm";
			this->Text = L"Форма";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void textBox_FIO_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void textBox_Phone_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{

}
private: System::Void richTextBox_ideaofvideo_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void checkBox_interior_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void checkBox_4k_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void comboBox_format_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void checkBox_airvideo_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void button_download_Click(System::Object^ sender, System::EventArgs^ e)
{
	Functions f;
	f.Insert(textBox_FIO->Text, textBox_Phone->Text,
		textBox_email->Text, textBox_timing->Text,
		checkBox_interior->Checked,checkBox_4k->Checked,
		checkBox_airvideo->Checked,comboBox_format->SelectedItem->ToString(),
		richTextBox_ideaofvideo->Text,checkBox_sign_lang_int->Checked,
		checkBox_color_corr->Checked, checkBox_subtitles->Checked, checkBox_music->Checked,
		checkBox_localization->Checked, textBox_location_layout->Text);
		
}
private: System::Void textBox_email_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void textBox_timing_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = tabPage2;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = tabPage3;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = tabPage1;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = tabPage2;
}

private: System::Void checkBox_4k_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox_timing_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

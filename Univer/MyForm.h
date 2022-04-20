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
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::CheckBox^ checkBox_4k;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox_airvideo;

	private: System::Windows::Forms::ComboBox^ comboBox_format;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button_download;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;




	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label3;




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
			this->checkBox_4k = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox_airvideo = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox_format = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button_download = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_FIO
			// 
			this->textBox_FIO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_FIO->Location = System::Drawing::Point(212, 35);
			this->textBox_FIO->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_FIO->Name = L"textBox_FIO";
			this->textBox_FIO->Size = System::Drawing::Size(132, 26);
			this->textBox_FIO->TabIndex = 0;
			this->textBox_FIO->Text = L"ФИО";
			this->textBox_FIO->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_FIO_TextChanged);
			// 
			// textBox_Phone
			// 
			this->textBox_Phone->Location = System::Drawing::Point(212, 104);
			this->textBox_Phone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_Phone->Name = L"textBox_Phone";
			this->textBox_Phone->Size = System::Drawing::Size(132, 25);
			this->textBox_Phone->TabIndex = 1;
			this->textBox_Phone->Text = L"8999999999";
			this->textBox_Phone->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Phone_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(43, 108);
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
			this->label4->Location = System::Drawing::Point(43, 456);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Опишите идею съемки";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox_email
			// 
			this->textBox_email->Location = System::Drawing::Point(212, 176);
			this->textBox_email->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(132, 25);
			this->textBox_email->TabIndex = 8;
			this->textBox_email->Text = L"Почта";
			this->textBox_email->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_email_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(43, 180);
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
			this->checkBox_interior->Checked = true;
			this->checkBox_interior->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_interior->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_interior->Location = System::Drawing::Point(47, 261);
			this->checkBox_interior->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_interior->Name = L"checkBox_interior";
			this->checkBox_interior->Size = System::Drawing::Size(262, 31);
			this->checkBox_interior->TabIndex = 0;
			this->checkBox_interior->Text = L"Доп интерьер";
			this->checkBox_interior->UseVisualStyleBackColor = true;
			this->checkBox_interior->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_interior_CheckedChanged);
			// 
			// checkBox_4k
			// 
			this->checkBox_4k->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_4k->Location = System::Drawing::Point(292, 357);
			this->checkBox_4k->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_4k->Name = L"checkBox_4k";
			this->checkBox_4k->Size = System::Drawing::Size(17, 31);
			this->checkBox_4k->TabIndex = 10;
			this->checkBox_4k->UseVisualStyleBackColor = true;
			this->checkBox_4k->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_4k_CheckedChanged);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(43, 335);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(211, 68);
			this->label6->TabIndex = 11;
			this->label6->Text = L"4K съемка (первоначально съмка производится в FullHD";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// checkBox_airvideo
			// 
			this->checkBox_airvideo->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_airvideo->Checked = true;
			this->checkBox_airvideo->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_airvideo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_airvideo->Location = System::Drawing::Point(408, 249);
			this->checkBox_airvideo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_airvideo->Name = L"checkBox_airvideo";
			this->checkBox_airvideo->Size = System::Drawing::Size(270, 55);
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
			this->comboBox_format->Location = System::Drawing::Point(577, 180);
			this->comboBox_format->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->label7->Location = System::Drawing::Point(404, 180);
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
			this->label8->Location = System::Drawing::Point(43, 37);
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
			this->button_download->Location = System::Drawing::Point(801, 520);
			this->button_download->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_download->Name = L"button_download";
			this->button_download->Size = System::Drawing::Size(160, 68);
			this->button_download->TabIndex = 18;
			this->button_download->Text = L"Отправить";
			this->button_download->UseVisualStyleBackColor = true;
			this->button_download->Click += gcnew System::EventHandler(this, &MyForm::button_download_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(577, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(404, 37);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 21);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Тип видео";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(404, 108);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(122, 21);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Длительность";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(577, 104);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 25);
			this->textBox2->TabIndex = 22;
			// 
			// checkBox1
			// 
			this->checkBox1->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(699, 249);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(262, 55);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"Субтитры";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(978, 357);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(262, 55);
			this->checkBox2->TabIndex = 28;
			this->checkBox2->Text = L"Сурдопереводчик";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(408, 357);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(262, 55);
			this->checkBox3->TabIndex = 29;
			this->checkBox3->Text = L"Цветокор";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(699, 357);
			this->checkBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(262, 55);
			this->checkBox4->TabIndex = 30;
			this->checkBox4->Text = L"Переозвучка(дубляж)";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(978, 235);
			this->checkBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(262, 82);
			this->checkBox5->TabIndex = 31;
			this->checkBox5->Text = L"Музыкальное сопровождение";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(47, 496);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(312, 121);
			this->richTextBox1->TabIndex = 32;
			this->richTextBox1->Text = L"Опишите идею видео\n";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(408, 496);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(312, 121);
			this->richTextBox2->TabIndex = 33;
			this->richTextBox2->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(404, 456);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 21);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Макет локации";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1265, 646);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button_download);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox_format);
			this->Controls->Add(this->checkBox_airvideo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBox_4k);
			this->Controls->Add(this->checkBox_interior);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_Phone);
			this->Controls->Add(this->textBox_FIO);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"Форма";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox_FIO_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void textBox_Phone_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{}
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
	f.select();
/*	f.Insert(textBox_FIO->Text, textBox_Phone->Text,
		textBox_email->Text, textBox_timing->Text,
		checkBox_interior->Checked,checkBox_4k->Checked,
		checkBox_airvideo->Checked,comboBox_format->SelectedItem->ToString(),
		richTextBox_ideaofvideo->Text);
		*/
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
};
}

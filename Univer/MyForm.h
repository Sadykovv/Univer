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


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox_ideaofvideo;

	private: System::Windows::Forms::TextBox^ textBox_email;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox_interior;
	private: System::Windows::Forms::CheckBox^ checkBox_4k;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox_airvideo;
	private: System::Windows::Forms::TextBox^ textBox_timing;
	private: System::Windows::Forms::ComboBox^ comboBox_format;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button_download;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox_ideaofvideo = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox_interior = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_4k = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox_airvideo = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_timing = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_format = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button_download = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_FIO
			// 
			this->textBox_FIO->Location = System::Drawing::Point(247, 64);
			this->textBox_FIO->Name = L"textBox_FIO";
			this->textBox_FIO->Size = System::Drawing::Size(100, 20);
			this->textBox_FIO->TabIndex = 0;
			this->textBox_FIO->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_FIO_TextChanged);
			// 
			// textBox_Phone
			// 
			this->textBox_Phone->Location = System::Drawing::Point(247, 111);
			this->textBox_Phone->Name = L"textBox_Phone";
			this->textBox_Phone->Size = System::Drawing::Size(100, 20);
			this->textBox_Phone->TabIndex = 1;
			this->textBox_Phone->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Phone_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(273, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Форма";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(126, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Номер телефона";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(476, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Хронометраж";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(322, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Опишите идею съемки";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// richTextBox_ideaofvideo
			// 
			this->richTextBox_ideaofvideo->Location = System::Drawing::Point(497, 241);
			this->richTextBox_ideaofvideo->Name = L"richTextBox_ideaofvideo";
			this->richTextBox_ideaofvideo->Size = System::Drawing::Size(235, 29);
			this->richTextBox_ideaofvideo->TabIndex = 7;
			this->richTextBox_ideaofvideo->Text = L"";
			this->richTextBox_ideaofvideo->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox_ideaofvideo_TextChanged);
			// 
			// textBox_email
			// 
			this->textBox_email->Location = System::Drawing::Point(247, 164);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(100, 20);
			this->textBox_email->TabIndex = 8;
			this->textBox_email->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_email_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(126, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Электронная почта";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// checkBox_interior
			// 
			this->checkBox_interior->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_interior->Location = System::Drawing::Point(110, 225);
			this->checkBox_interior->Name = L"checkBox_interior";
			this->checkBox_interior->Size = System::Drawing::Size(148, 24);
			this->checkBox_interior->TabIndex = 0;
			this->checkBox_interior->Text = L"Доп интерьер";
			this->checkBox_interior->UseVisualStyleBackColor = true;
			this->checkBox_interior->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_interior_CheckedChanged);
			// 
			// checkBox_4k
			// 
			this->checkBox_4k->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_4k->Location = System::Drawing::Point(242, 255);
			this->checkBox_4k->Name = L"checkBox_4k";
			this->checkBox_4k->Size = System::Drawing::Size(16, 24);
			this->checkBox_4k->TabIndex = 10;
			this->checkBox_4k->UseVisualStyleBackColor = true;
			this->checkBox_4k->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_4k_CheckedChanged);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(110, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 41);
			this->label6->TabIndex = 11;
			this->label6->Text = L"4K съемка (первоначально съмка производится в FullHD";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// checkBox_airvideo
			// 
			this->checkBox_airvideo->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox_airvideo->Location = System::Drawing::Point(113, 313);
			this->checkBox_airvideo->Name = L"checkBox_airvideo";
			this->checkBox_airvideo->Size = System::Drawing::Size(145, 24);
			this->checkBox_airvideo->TabIndex = 12;
			this->checkBox_airvideo->Text = L"Съемка с воздуха";
			this->checkBox_airvideo->UseVisualStyleBackColor = true;
			this->checkBox_airvideo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_airvideo_CheckedChanged);
			// 
			// textBox_timing
			// 
			this->textBox_timing->Location = System::Drawing::Point(589, 64);
			this->textBox_timing->Name = L"textBox_timing";
			this->textBox_timing->Size = System::Drawing::Size(100, 20);
			this->textBox_timing->TabIndex = 13;
			this->textBox_timing->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_timing_TextChanged);
			// 
			// comboBox_format
			// 
			this->comboBox_format->FormattingEnabled = true;
			this->comboBox_format->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Праздничное", L"Корпоративное", L"Промо видео",
					L"Другое"
			});
			this->comboBox_format->Location = System::Drawing::Point(589, 146);
			this->comboBox_format->Name = L"comboBox_format";
			this->comboBox_format->Size = System::Drawing::Size(121, 21);
			this->comboBox_format->TabIndex = 15;
			this->comboBox_format->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_format_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(485, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Формат";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(142, 67);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"ФИО";
			// 
			// button_download
			// 
			this->button_download->Location = System::Drawing::Point(370, 395);
			this->button_download->Name = L"button_download";
			this->button_download->Size = System::Drawing::Size(75, 23);
			this->button_download->TabIndex = 18;
			this->button_download->Text = L"Отправить";
			this->button_download->UseVisualStyleBackColor = true;
			this->button_download->Click += gcnew System::EventHandler(this, &MyForm::button_download_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->ClientSize = System::Drawing::Size(743, 445);
			this->Controls->Add(this->button_download);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox_format);
			this->Controls->Add(this->textBox_timing);
			this->Controls->Add(this->checkBox_airvideo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBox_4k);
			this->Controls->Add(this->checkBox_interior);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->richTextBox_ideaofvideo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_Phone);
			this->Controls->Add(this->textBox_FIO);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox_FIO_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void textBox_Phone_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void richTextBox_ideaofvideo_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void checkBox_interior_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void checkBox_4k_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void comboBox_format_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void checkBox_airvideo_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void button_download_Click(System::Object^ sender, System::EventArgs^ e)
{

	Functions f;
	f.Insert(textBox_FIO->Text);
}
private: System::Void textBox_email_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void textBox_timing_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
};
}

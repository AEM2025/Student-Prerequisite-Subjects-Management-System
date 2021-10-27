#pragma once
#include"CreatAcc.h"
#include"Admin_Form.h"
#include"Student_form.h"
namespace CoursesReservision {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(104, 336);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(511, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"&Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, System::Drawing::FontStyle::Italic));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Student", L"Admin"});
			this->comboBox1->Location = System::Drawing::Point(295, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(313, 37);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Login Privilege";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, System::Drawing::FontStyle::Italic));
			this->textBox2->Location = System::Drawing::Point(295, 164);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(313, 36);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(72, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 33);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->Location = System::Drawing::Point(72, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 33);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(520, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 49);
			this->button2->TabIndex = 4;
			this->button2->Text = L"&Sign Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(451, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"If you don\'t have Account Sign Up from here ------>>";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Minion Pro", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(241, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 45);
			this->label5->TabIndex = 11;
			this->label5->Text = L":";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Minion Pro", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(241, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 45);
			this->label6->TabIndex = 12;
			this->label6->Text = L":";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Minion Pro", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->Location = System::Drawing::Point(241, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 45);
			this->label7->TabIndex = 13;
			this->label7->Text = L":";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, System::Drawing::FontStyle::Italic));
			this->textBox1->Location = System::Drawing::Point(295, 109);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(313, 36);
			this->textBox1->TabIndex = 14;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(712, 441);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Course Reservision";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Clear(){
			textBox1->Text="";
			textBox2->Text="";
		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 CreatAcc^ frm = gcnew CreatAcc(this);
				 frm->ShowDialog();
				 Clear();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			  StreamReader^ read = gcnew StreamReader("Accounts.txt");
		      int x = 0;
				 while (!read->EndOfStream)
				 {
					 
					 String ^data = Convert::ToString(read->ReadLine());
					  
					 array<String^>^result;
					 array<Char>^splitChars = {'\t'};
					 result = data->Split(splitChars, StringSplitOptions::None);

					 if (comboBox1->Text == result[0] && textBox1->Text == result[1])
					 { 
						 read->Close();
						 if (textBox2->Text==result[2] && result[0]=="Admin")
						 {  
							     this->Hide();
								 Admin_Form ^  frm1= gcnew Admin_Form(this);
								 frm1->ShowDialog();
						         Clear();
								 x = 1;
						 }
						 else if  (textBox2->Text==result[3]&&result[0]=="Student"&&result[5]=="active")
							 {
								 this->Hide();
								 Student_form^  frm2 = gcnew Student_form(this,result[2]);
								 frm2->ShowDialog();
							     Clear();
						         x = 1;	
						 }
					
						 break ;
					 }
					 
			 }
				 if (x==0)
							  MessageBox::Show("This Account doesn't exist", "Login Error",
							  MessageBoxButtons::OK, MessageBoxIcon::Error);
				 read->Close();	
		
		 }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(comboBox1->Text=="Admin")
			 {
				  button2->Visible=false;
				  label4->Visible=false;
			   label2->Text= "User Name";
			   Clear();
			 }
			 else if(comboBox1->Text=="Student")
			  { 
				  button2->Visible=true;
				  label4->Visible=true;
				  label2->Text= "ID";
				  Clear();
		     	 }
		 
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Text="Student";
		 }

};
}


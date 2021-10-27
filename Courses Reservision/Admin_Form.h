#pragma once

namespace CoursesReservision {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Admin_Form
	/// </summary>
	public ref class Admin_Form : public System::Windows::Forms::Form
	{Form^ f ;
	public:
		Admin_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
Admin_Form(Form^ frm)
		{
			f = frm ;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  textBox4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_Form::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(842, 453);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Silver;
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->listBox3);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(834, 427);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add Courses";
			// 
			// textBox4
			// 
			this->textBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->textBox4->FormattingEnabled = true;
			this->textBox4->Location = System::Drawing::Point(151, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 21);
			this->textBox4->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 22);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Course Description";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(26, 226);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(258, 72);
			this->textBox6->TabIndex = 7;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Minion Pro", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button6->Location = System::Drawing::Point(26, 357);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(258, 53);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Save";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Admin_Form::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Minion Pro", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button5->Location = System::Drawing::Point(26, 308);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 43);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Correct";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Admin_Form::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Minion Pro", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button4->Location = System::Drawing::Point(148, 308);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 43);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Admin_Form::button4_Click);
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 29;
			this->listBox3->Location = System::Drawing::Point(336, 27);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(492, 381);
			this->listBox3->TabIndex = 11;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin_Form::listBox3_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Minion Pro", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 21);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Hours";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Minion Pro", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Pre-required";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Minion Pro", 11.25F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(22, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Max Student ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(151, 134);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(133, 26);
			this->textBox5->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(151, 101);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 26);
			this->textBox3->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(151, 65);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(133, 25);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(151, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 27);
			this->textBox1->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Minion Pro", 11.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(22, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 21);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Course Code";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 11.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(22, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 21);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Course Name";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Silver;
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(834, 427);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Active Students";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(632, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Active";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin_Form::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(444, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show All Student";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin_Form::button1_Click);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::White;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(54, 32);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(689, 292);
			this->listBox2->TabIndex = 0;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin_Form::listBox2_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Silver;
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->listBox1);
			this->tabPage3->Controls->Add(this->comboBox2);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(834, 427);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"View Information";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(645, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Admin_Form::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(65, 101);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(667, 260);
			this->listBox1->TabIndex = 4;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(421, 38);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(185, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(370, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Search by ";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Name Of Course", L"Name Of Student"});
			this->comboBox1->Location = System::Drawing::Point(146, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(201, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin_Form::comboBox1_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(834, 427);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Add Student";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Minion Pro", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button7->Location = System::Drawing::Point(515, 471);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(329, 51);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Log Out";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Admin_Form::button7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(124, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 29);
			this->label9->TabIndex = 18;
			this->label9->Text = L":";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(124, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 29);
			this->label10->TabIndex = 19;
			this->label10->Text = L":";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(124, 101);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 29);
			this->label11->TabIndex = 20;
			this->label11->Text = L":";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(124, 163);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 29);
			this->label12->TabIndex = 21;
			this->label12->Text = L":";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(124, 134);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 29);
			this->label13->TabIndex = 22;
			this->label13->Text = L":";
			// 
			// Admin_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(866, 534);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Admin_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_Form";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Admin_Form::Admin_Form_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Admin_Form::Admin_Form_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void Clear(){
			 textBox1->Text="";
	//	 textBox2->Text="";
		 textBox3->Text="";
		 textBox4->Text="";
		 textBox5->Text="";
		 textBox6->Text="";}
			void EasyChooseOn(String^ name)
		{
			if (name=="Name Of Course"){
			  StreamReader^ read = gcnew StreamReader("Courses.txt");
			 while (!read->EndOfStream)
				 {					 
					 String ^data = Convert::ToString(read->ReadLine());					  
					 array<String^>^result;
					 array<Char>^splitChars = {'\t'};
					 result = data->Split(splitChars, StringSplitOptions::None);					
						 String^ Item = result[0];					
					 comboBox2->Items->Add(Item);
		}
			 read->Close();}
			else if (name=="Name Of Student"){
				  StreamReader^ read = gcnew StreamReader("Accounts.txt");
				 while (!read->EndOfStream)
				 {					 
					 String ^data = Convert::ToString(read->ReadLine());					  
					 array<String^>^result;
					 array<Char>^splitChars = {'\t'};
					 result = data->Split(splitChars, StringSplitOptions::None);
						  String^ Item = result[2];
					if(Item!="Genius") comboBox2->Items->Add(Item);
		}

				 read->Close();}
		}
			void Update(){
			textBox4->Items->Clear();
				textBox4->Items->Add("");
			String^CourseCode ;
			  StreamReader^ read = gcnew StreamReader("Courses.txt");
			 while (!read->EndOfStream)
				 {					 
					 String ^data = Convert::ToString(read->ReadLine());					  
					 array<String^>^result;
					 array<Char>^splitChars = {'\t'};
					 result = data->Split(splitChars, StringSplitOptions::None);	
					 textBox4->Items->Add(result[0]);
		CourseCode=result[1];
			 }		
			 double x = Convert::ToDouble(CourseCode);
			 x++;
			 CourseCode = Convert::ToString(x);
			 textBox2->Text=CourseCode;
			 read->Close();
		}
	private: System::Void Admin_Form_Load(System::Object^  sender, System::EventArgs^  e) {
			Update(); }
	private: System::Void Admin_Form_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				Application::Exit();}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				   listBox2->Items->Clear(); 
				 StreamReader^ read = gcnew StreamReader("Accounts.txt");
				 while (!read->EndOfStream)
				 {
				String^ data = read->ReadLine();
				listBox2->Items->Add(data);
				 }
				 			 read->Close();
			 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(listBox2->SelectedIndex!=-1&&listBox2->SelectedIndex!=0){ 
			  array<String^>^resulte;
			 String^ str=listBox2->SelectedItem->ToString();
			 resulte=str->Split('\t');
			 resulte[5]="active";
			 str="";
			 for (int i = 0 ; i<6;i++)
				 str+=resulte[i]+"\t"; 
			  int indx=listBox2->SelectedIndex;
			 if(indx!=-1)
				 listBox2->Items[indx]=str;
					
		  }
			    
					  StreamWriter^ saveF=gcnew StreamWriter("Accounts.txt");
					 	 for(int i=0;i<listBox2->Items->Count;i++)
				saveF->WriteLine(listBox2->Items[i]);
					 saveF->Close();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	 if (textBox1->Text!=""&&textBox2->Text!=""&&textBox3->Text!=""&&textBox5->Text!=""&&textBox6->Text!="" ){
			 String^ CourseDb = textBox1->Text+"\t"+ textBox2->Text+"\t"+ textBox3->Text+"\t"+ textBox4->Text+"\t"+ textBox5->Text+"\t"+ textBox6->Text;
			 listBox3->Items->Add(CourseDb);
			 textBox4->Items->Add(textBox1->Text);
			 double x = Convert::ToDouble(textBox2->Text);
			 x++;
			
			 textBox2->Text= Convert::ToString(x);
			 Clear();
		
		 }
		 else
			  MessageBox::Show("Please Fill The Boxes", "Searching Error",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ CourseDb = textBox1->Text+"\t"+ textBox2->Text+"\t"+ textBox3->Text+"\t"+ textBox4->Text+"\t"+ textBox5->Text+"\t"+ textBox6->Text;
			 int indx=listBox3->SelectedIndex;
			 if(indx!=-1)
				 listBox3->Items[indx]=CourseDb; 
		 }
private: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			   if(listBox3->SelectedIndex!=-1){ 
			  array<String^>^resulte;
			 String^ str=listBox3->SelectedItem->ToString();
			 resulte=str->Split('\t');
			 textBox1->Text=resulte[0];
			 textBox2->Text=resulte[1];
			 textBox3->Text=resulte[2];
			 textBox4->Text=resulte[3];
			 textBox5->Text=resulte[4];
			  textBox6->Text=resulte[5];
			   }}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamWriter^ saveFile=gcnew StreamWriter("Courses.txt",true);
			  for(int i=0;i<listBox3->Items->Count;i++){
				    array<String^>^resulte;
			 String^ str=listBox3->Items[i]->ToString();
			 resulte=str->Split('\t');
			 StreamWriter^ saveFile1=gcnew StreamWriter(resulte[0]+".txt");			 
				saveFile1->WriteLine(resulte[0]);
				saveFile1->WriteLine("0");
				saveFile1->Close();
				saveFile->WriteLine(listBox3->Items[i]);
			  }
			  saveFile->Close();
			  Clear();
			  listBox3->Items->Clear();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox1->Text!=""&&comboBox2->Text!=""){
				 listBox1->Items->Clear();
				    StreamReader^ read = gcnew StreamReader(comboBox2->Text+".txt");
				 while (!read->EndOfStream)
				 {
				String^ data = read->ReadLine();
				listBox1->Items->Add(data);
				 }
				 			 read->Close();
			 }
			 else
				   MessageBox::Show("Choose SomeThing To Search For", "Searching Error",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 comboBox2->Items->Clear();
EasyChooseOn(comboBox1->Text);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			  f->Show();
				 this->Hide();
		 }
};            

}

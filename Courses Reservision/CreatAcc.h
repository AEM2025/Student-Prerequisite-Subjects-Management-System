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
	/// Summary for CreatAcc
	/// </summary>
	public ref class CreatAcc : public System::Windows::Forms::Form
	{Form ^ f;
	public:
		CreatAcc(void)
		{
		
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CreatAcc(Form^ pre)
		{
			InitializeComponent();
			f=pre;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreatAcc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Diagnostics::EventLog^  eventLog1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreatAcc::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(89, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Creation Account For Students To Reserver Courses  .";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(89, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Please Fill The Fields !! ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 15.75F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(78, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(397, 43);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Creat Account";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatAcc::button1_Click);
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(286, 123);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(189, 30);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(286, 159);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 30);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(286, 195);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(189, 31);
			this->textBox3->TabIndex = 4;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic));
			this->label3->Location = System::Drawing::Point(73, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Your ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(73, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 26);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Full Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic));
			this->label5->Location = System::Drawing::Point(73, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 26);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(73, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Accadmic Year";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(286, 232);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(189, 31);
			this->textBox5->TabIndex = 3;
			this->textBox5->UseSystemPasswordChar = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic));
			this->label7->Location = System::Drawing::Point(73, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 26);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Confirm Password";
			// 
			// textBox4
			// 
			this->textBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->textBox4->FormattingEnabled = true;
			this->textBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"First Year", L"Second Year", L"Third Year", L"Fourth Year", 
				L"Fifth Year", L"Sixth Year", L"Seventh Year"});
			this->textBox4->Location = System::Drawing::Point(286, 284);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(189, 21);
			this->textBox4->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(548, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 43);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreatAcc::button2_Click);
			// 
			// CreatAcc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(756, 400);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"CreatAcc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Creat Account";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CreatAcc::CreatAcc_FormClosed);
			this->Load += gcnew System::EventHandler(this, &CreatAcc::CreatAcc_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->eventLog1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void Clear(){
	textBox2->Text="";
	textBox3->Text="";
	textBox4->Text="";
	textBox5->Text="";


}
	private: System::Void CreatAcc_Load(System::Object^  sender, System::EventArgs^  e) {
StreamReader^ in = gcnew StreamReader("Student_ID.txt");
			        while(!in->EndOfStream)
			           {
			               String^ str=in->ReadLine();
			              textBox1->Text=str;
			           }
			        in->Close();			 }
private: System::Void CreatAcc_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			Application::Exit();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(textBox5->Text==textBox3->Text){
			 String^ userInfo = "Student"+"\t"+textBox1->Text + "\t"+textBox2->Text + "\t"+textBox3->Text + "\t"+textBox4->Text+"\t"+ "Pending" ;
				 StreamWriter^ saveFile = gcnew StreamWriter("Accounts.txt", true);
             saveFile->WriteLine(userInfo);
			 saveFile->Close();
			 StreamWriter^ saveFile3=gcnew StreamWriter(textBox2->Text+".txt");
			 saveFile3->WriteLine(textBox2->Text);
			 saveFile3->Close();
			 //////////////////////////////////////////////////////////////////////////////////
			 double x=Convert::ToDouble(textBox1->Text);
			 double i=1;
			   double res;
			 if (!i==0)
			 {
				 res=x+i;
				 
			 }
			 String^resulte=Convert::ToString(res);
			 textBox1->Text=resulte;
			 StreamWriter^ saveFile4=gcnew StreamWriter("Student_ID.txt");
			 saveFile4->WriteLine(textBox1->Text);
			 saveFile4->Close();
              Clear();}
			 else if (textBox2->Text==""||textBox4->Text=="")
				  MessageBox::Show("Please Fill the Boxes", "Account Error",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
			 
			 else
			 {
			 MessageBox::Show("Your password doesn't match same", "Password Error",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
			 
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	 f->Show();
			 this->Hide();
			 Clear();	 }
};
}

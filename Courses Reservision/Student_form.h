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
	/// Summary for Student_form
	/// </summary>
	public ref class Student_form : public System::Windows::Forms::Form
	{Form^ f;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DomainUpDown^  textBox2;





			 String^ name;
	public:
		Student_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Student_form(Form^ frm,String^ x)
		{f = frm;
		name = x;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student_form()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, System::Drawing::FontStyle::Italic));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(16, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(134, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(106, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Student_form::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &Student_form::comboBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Avaliable Courses";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Minion Pro Med", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(24, 136);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(296, 85);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 9.749999F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(8, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Course Descipison";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(16, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 347);
			this->panel1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 15.75F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(24, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(296, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Register For The Course";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Student_form::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Location = System::Drawing::Point(374, 39);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(511, 347);
			this->panel2->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->Items->Add(L"0");
			this->textBox2->Items->Add(L"1");
			this->textBox2->Items->Add(L"2");
			this->textBox2->Items->Add(L"3");
			this->textBox2->Items->Add(L"4");
			this->textBox2->Items->Add(L"5");
			this->textBox2->Items->Add(L"6");
			this->textBox2->Items->Add(L"7");
			this->textBox2->Items->Add(L"8");
			this->textBox2->Items->Add(L"9");
			this->textBox2->Items->Add(L"10");
			this->textBox2->Items->Add(L"11");
			this->textBox2->Items->Add(L"12");
			this->textBox2->Items->Add(L"13");
			this->textBox2->Items->Add(L"14");
			this->textBox2->Items->Add(L"15");
			this->textBox2->Items->Add(L"16");
			this->textBox2->Items->Add(L"17");
			this->textBox2->Items->Add(L"18");
			this->textBox2->Items->Add(L"19");
			this->textBox2->Items->Add(L"20");
			this->textBox2->Items->Add(L"21");
			this->textBox2->Items->Add(L"22");
			this->textBox2->Items->Add(L"23");
			this->textBox2->Items->Add(L"24");
			this->textBox2->Items->Add(L"25");
			this->textBox2->Items->Add(L"26");
			this->textBox2->Items->Add(L"27");
			this->textBox2->Items->Add(L"28");
			this->textBox2->Items->Add(L"29");
			this->textBox2->Items->Add(L"30");
			this->textBox2->Items->Add(L"31");
			this->textBox2->Items->Add(L"32");
			this->textBox2->Items->Add(L"33");
			this->textBox2->Items->Add(L"34");
			this->textBox2->Items->Add(L"35");
			this->textBox2->Items->Add(L"36");
			this->textBox2->Items->Add(L"37");
			this->textBox2->Items->Add(L"38");
			this->textBox2->Items->Add(L"39");
			this->textBox2->Items->Add(L"40");
			this->textBox2->Items->Add(L"41");
			this->textBox2->Items->Add(L"42");
			this->textBox2->Items->Add(L"43");
			this->textBox2->Items->Add(L"44");
			this->textBox2->Items->Add(L"45");
			this->textBox2->Items->Add(L"46");
			this->textBox2->Items->Add(L"47");
			this->textBox2->Items->Add(L"48");
			this->textBox2->Items->Add(L"49");
			this->textBox2->Items->Add(L"50");
			this->textBox2->Items->Add(L"51");
			this->textBox2->Items->Add(L"52");
			this->textBox2->Items->Add(L"53");
			this->textBox2->Items->Add(L"54");
			this->textBox2->Items->Add(L"55");
			this->textBox2->Items->Add(L"56");
			this->textBox2->Items->Add(L"57");
			this->textBox2->Items->Add(L"58");
			this->textBox2->Items->Add(L"59");
			this->textBox2->Items->Add(L"60");
			this->textBox2->Items->Add(L"61");
			this->textBox2->Items->Add(L"62");
			this->textBox2->Items->Add(L"63");
			this->textBox2->Items->Add(L"64");
			this->textBox2->Items->Add(L"65");
			this->textBox2->Items->Add(L"66");
			this->textBox2->Items->Add(L"67");
			this->textBox2->Items->Add(L"68");
			this->textBox2->Items->Add(L"69");
			this->textBox2->Items->Add(L"70");
			this->textBox2->Items->Add(L"71");
			this->textBox2->Items->Add(L"72");
			this->textBox2->Items->Add(L"73");
			this->textBox2->Items->Add(L"74");
			this->textBox2->Items->Add(L"75");
			this->textBox2->Items->Add(L"76");
			this->textBox2->Items->Add(L"78");
			this->textBox2->Items->Add(L"79");
			this->textBox2->Items->Add(L"80");
			this->textBox2->Items->Add(L"81");
			this->textBox2->Items->Add(L"82");
			this->textBox2->Items->Add(L"83");
			this->textBox2->Items->Add(L"84");
			this->textBox2->Items->Add(L"85");
			this->textBox2->Items->Add(L"86");
			this->textBox2->Items->Add(L"87");
			this->textBox2->Items->Add(L"88");
			this->textBox2->Items->Add(L"89");
			this->textBox2->Items->Add(L"90");
			this->textBox2->Items->Add(L"91");
			this->textBox2->Items->Add(L"92");
			this->textBox2->Items->Add(L"93");
			this->textBox2->Items->Add(L"94");
			this->textBox2->Items->Add(L"95");
			this->textBox2->Items->Add(L"96");
			this->textBox2->Items->Add(L"97");
			this->textBox2->Items->Add(L"98");
			this->textBox2->Items->Add(L"99");
			this->textBox2->Location = System::Drawing::Point(124, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(101, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Wrap = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Minion Pro", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Finished hours";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(344, 20);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 31);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View My Courses";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Student_form::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(231, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Student_form::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(25, 57);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(458, 264);
			this->listBox1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Minion Pro SmBd", 15.75F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(562, 392);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(316, 41);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Log Out";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Student_form::button4_Click_1);
			// 
			// Student_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(890, 445);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Student_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student_form";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Student_form::Student_form_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Student_form::Student_form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void GeniusFunction(){
			 StreamReader^ read = gcnew StreamReader("Courses.txt");

				 while (!read->EndOfStream)
				 {
					 
					 String ^data = Convert::ToString(read->ReadLine());
					  
					 array<String^>^result;
					 array<Char>^splitChars = {'\t'};
					 result = data->Split(splitChars, StringSplitOptions::None);
					  StreamReader^ read1 = gcnew StreamReader(result[0]+".txt");
					  String^ ava;
				 while (!read1->EndOfStream)
				 {
					 
					 String ^data1 = Convert::ToString(read1->ReadLine());
					  
					 array<String^>^resulte;
					 array<Char>^splitChars = {'\t'};
					 resulte = data1->Split(splitChars, StringSplitOptions::None);
					  ava = resulte[0];
				 }
				 read1->Close(); 
				 
				 	 double x=Convert::ToDouble(ava);
					  double y=Convert::ToDouble(result[2]);
					  double z= y-x;
					 
					  if (z!=0)
						  { StreamReader^ read0 = gcnew StreamReader(name+".txt");
						  int c =0 , v =0 ;
				 while (!read0->EndOfStream)
				 {
					 
					 String ^data0 = Convert::ToString(read0->ReadLine());
					  
					 array<String^>^result0;
				      array<Char>^splitChars = {'\t'};
					   result0 = data0->Split(splitChars, StringSplitOptions::None);
					 if (result0[0]==result[0])
						  c =1;
					 else if (result0[0]==result[3]&&result0[2]=="Finished")
						v =1 ;
					 
					/*  else{int check = 0;

						   for(int i=0;i<comboBox1->Items->Count;i++)
						  if(comboBox1->Items[i]==result[0])
							check = 1  ;
						   if (check!=1)
							   comboBox1->Items->Add(result[0]);
					  }*/
				 }
					  if (result[3]==""&&c==0)
						 comboBox1->Items->Add(result[0]);
					  else if (v==1&& c== 0)
						  comboBox1->Items->Add(result[0]);
				 read0->Close();
					  }}
				 read->Close();
		}
	private: System::Void Student_form_Load(System::Object^  sender, System::EventArgs^  e) {
     
				 label2->Text= name ;
	 GeniusFunction();
			 }


	private: System::Void Student_form_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				Application::Exit();
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
 StreamReader^ read = gcnew StreamReader("Courses.txt");

				 while (!read->EndOfStream)
				 {
					 
					 String ^data = Convert::ToString(read->ReadLine());
					  
					 array<String^>^result;
					 array<Char>^splitChars = {'\t'};
					 result = data->Split(splitChars, StringSplitOptions::None);
					 if (result[0]==comboBox1->Text)
				 textBox1->Text=result[5];
				 }
				 read->Close();

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ava;
			 StreamReader^ read1 = gcnew StreamReader(comboBox1->Text+".txt");				 
				 while (!read1->EndOfStream)
				 {
					 
					 String ^data = Convert::ToString(read1->ReadLine());
					  
					 array<String^>^resulte;
					 array<Char>^splitChars = {'\t'};
					 resulte = data->Split(splitChars, StringSplitOptions::None);
					  ava = resulte[0];
				 }
				 read1->Close(); 
				  double x=Convert::ToDouble(ava);
				  x++;
				  String^ res = Convert::ToString(x);
			 StreamWriter^ saveFile1=gcnew StreamWriter(comboBox1->Text+".txt",true);			 
				saveFile1->WriteLine(res+"\t"+name);
				saveFile1->Close();
				StreamWriter^ saveFile2=gcnew StreamWriter(name+".txt",true);			 
				saveFile2->WriteLine(comboBox1->Text+"\t"+"0"+"\t"+"Progressed");
		saveFile2->Close();
		comboBox1->Text="";
		textBox1->Text="";
		listBox1->Items->Clear();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
listBox1->Items->Clear();
			 StreamReader^ read = gcnew StreamReader(name+".txt");
				 while (!read->EndOfStream)
				 {
				String^ data = read->ReadLine();
				listBox1->Items->Add(data);
				 }
				 			 read->Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
       if(listBox1->SelectedIndex!=-1&&listBox1->SelectedIndex!=0&&textBox2->Text!=""){
			 array<String^>^result;
			 String^ str=listBox1->SelectedItem->ToString();
			 result=str->Split('\t');
			  double x=Convert::ToDouble(result[1]);
			   double y=Convert::ToDouble(textBox2->Text);
			   x+=y;
			   StreamReader^ read1 = gcnew StreamReader("Courses.txt");				 
				 while (!read1->EndOfStream)
				 {
					 
					 String ^data = Convert::ToString(read1->ReadLine());
					  
					 array<String^>^resulte;
					 array<Char>^splitChars = {'\t'};
					 resulte = data->Split(splitChars, StringSplitOptions::None);
					 if(resulte[0]==result[0])
					 {String^ str;
                              double z=Convert::ToDouble(resulte[4]);
							  if (x>=z){
								 str = result[0]+"\t"+z+"\t"+"Finished";
							  }
							  else
								  str = result[0]+"\t"+x+"\t"+"Progressed";
							  int indx=listBox1->SelectedIndex;
		         	 if(indx!=-1)
			          	listBox1->Items[indx]=str;
					 }
				 }
				 read1->Close();
	   
	 StreamWriter^ saveFile0=gcnew StreamWriter(name+".txt");
	 for(int i=0;i<listBox1->Items->Count;i++)
		 saveFile0->WriteLine(listBox1->Items[i]);
	 saveFile0->Close();
	   }
	 textBox2->Text="";
						
	   
	  
		 
		 }
		 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
  f->Show();
			 this->Hide();
		 }
private: System::Void comboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 comboBox1->Items->Clear();
		 GeniusFunction();
		 }
};
}

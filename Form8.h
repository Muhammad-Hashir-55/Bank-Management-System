#pragma once
#include <string>
#include <iostream>
static int numberofcustomers = 0;

namespace CppCLRWinFormsProject {


	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form8
	/// </summary>
	public ref class Form8 : public System::Windows::Forms::Form
	{
	public:
		Form8(void)
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
		~Form8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(327, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome New Customer";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(268, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(373, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"You Can Directly Create Account In Some Seconds";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Your Name :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form8::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(40, 186);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(165, 26);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form8::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Enter Your ID :";
			this->label4->Click += gcnew System::EventHandler(this, &Form8::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 225);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Enter Your Address :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(40, 248);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(298, 26);
			this->textBox3->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(214, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Enter Your Contact Number :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(40, 309);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(235, 26);
			this->textBox4->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(193, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Enter Total Cash To Store";
			this->label7->Click += gcnew System::EventHandler(this, &Form8::label7_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(40, 373);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(235, 26);
			this->textBox5->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(515, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 71);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form8::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(716, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 71);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form8::button2_Click);
			// 
			// Form8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 433);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form8";
			this->Text = L"New Customer Registration";
			this->Load += gcnew System::EventHandler(this, &Form8::Form8_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form8_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox5->Text != "") {
		MessageBox::Show("Congratulations You Have Successfully Registered");
		Form8::Close();
		numberofcustomers++;

	  }
	else {
		MessageBox::Show("Dear Customer Please Fill in All Details");
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Are You Sure ? If Yes then press ok");

	Form8::Close();
}
};
}

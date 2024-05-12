#pragma once
#include "Form7.h"
#include "Form8.h"


	namespace    CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		Form6(void)
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
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(228, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(366, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome Dear Customer";
			this->label1->Click += gcnew System::EventHandler(this, &Form6::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Choose Your Desired Option";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(400, 94);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Login As Old Customer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(52, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(400, 94);
			this->button2->TabIndex = 3;
			this->button2->Text = L"New here , Create your Account";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form6::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(656, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 80);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Go Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form6::button3_Click);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 439);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form6";
			this->Text = L"Customer Welcoming";
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form6_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Form6::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form7^ frm7 = gcnew Form7();
	frm7->Show();
	// this->Hide();
	//	MessageBox::Show("Opening !st login Page");
		//Form1^ frm1 = gcnew Form1();
		  //frm1->Show();
		   //this->Hide();

    


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//////////////////////////////////////////////////////////////////////////////////////////

	Form8^ frm8 = gcnew Form8();
	frm8->Show();
	// this->Hide();
}
};
}

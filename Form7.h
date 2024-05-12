#pragma once
#include "Form9h.h"
#include "Bank.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form7(void)
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
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(254, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Old Customer Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter your ID :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 78);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Verify";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(571, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 64);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Go Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form7::button2_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 404);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form7";
			this->Text = L"Old Customer Secuity Login";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		string MarshalString(String^ s) {
			using namespace Runtime::InteropServices;
			string os;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		MessageBox::Show("Login Successful");
		Form9h^ frm9 = gcnew Form9h();
		frm9->Show();



	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	Form7::Close();
}
private: System::Void Form7_Load(System::Object^ sender, System::EventArgs^ e) {


}
};
}

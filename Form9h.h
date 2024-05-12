#pragma once
// #include "Form10.h"
namespace  CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form9h
	/// </summary>
	public ref class Form9h : public System::Windows::Forms::Form
	{
	public:
		Form9h(void)
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
		~Form9h()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(242, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(477, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome Dear Customer";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(41, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(376, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Choose Your Desired Option";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 101);
			this->button1->TabIndex = 2;
			this->button1->Text = L"To Perform Transactions";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form9h::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(272, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 101);
			this->button2->TabIndex = 3;
			this->button2->Text = L"To View Your Details";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(512, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 101);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Update Your Details";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(807, 337);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 73);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Go Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form9h::button4_Click);
			// 
			// Form9h
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 448);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form9h";
			this->Text = L"Customer Essentials";
			this->Load += gcnew System::EventHandler(this, &Form9h::Form9h_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form9h_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Form9h::Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	//Form10^ frm10 = gcnew Form10();
	//frm10->Show();
	// this->Hide();







}
};
}

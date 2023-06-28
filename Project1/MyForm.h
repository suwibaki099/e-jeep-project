#pragma once

#include "receipt.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Malaria;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ enter;
	private: System::Windows::Forms::Label^ change;


	private: System::Windows::Forms::Button^ student;
	private: System::Windows::Forms::Button^ SeniorCitizen;
	private: System::Windows::Forms::Button^ Pregnant;
	private: System::Windows::Forms::Button^ PWD;
	private: System::Windows::Forms::Button^ Regularpassenger;






	private: System::Windows::Forms::Label^ from;

	private: System::Windows::Forms::Label^ destination;

	private: System::Windows::Forms::Label^ discount;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;






	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->Malaria = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->change = (gcnew System::Windows::Forms::Label());
			this->student = (gcnew System::Windows::Forms::Button());
			this->SeniorCitizen = (gcnew System::Windows::Forms::Button());
			this->Pregnant = (gcnew System::Windows::Forms::Button());
			this->PWD = (gcnew System::Windows::Forms::Button());
			this->Regularpassenger = (gcnew System::Windows::Forms::Button());
			this->from = (gcnew System::Windows::Forms::Label());
			this->destination = (gcnew System::Windows::Forms::Label());
			this->discount = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"M.J. Transportation Company";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(13, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(383, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"BRGY 185, Malaria Road, Zone 16 District 1, Caloocan City";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(27, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"FROM";
			// 
			// Malaria
			// 
			this->Malaria->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Malaria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Malaria->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Malaria->Location = System::Drawing::Point(32, 169);
			this->Malaria->Name = L"Malaria";
			this->Malaria->Size = System::Drawing::Size(201, 89);
			this->Malaria->TabIndex = 3;
			this->Malaria->Text = L"Malaria";
			this->Malaria->UseVisualStyleBackColor = false;
			this->Malaria->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(32, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 89);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Pangarap";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(32, 359);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 89);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Lagro";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(239, 169);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(201, 89);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Amparo";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(239, 264);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(201, 89);
			this->button5->TabIndex = 8;
			this->button5->Text = L"SM Fairview";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(239, 359);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(201, 89);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Bayan";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(588, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 26);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Destination";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(800, 169);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(201, 89);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Amparo";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(593, 169);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(201, 89);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Malaria";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(593, 264);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(201, 89);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Pangarap";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(593, 359);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(201, 89);
			this->button9->TabIndex = 19;
			this->button9->Text = L"Lagro";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(800, 264);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(201, 89);
			this->button10->TabIndex = 20;
			this->button10->Text = L"SM Fairview";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(800, 359);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(201, 89);
			this->button11->TabIndex = 21;
			this->button11->Text = L"Bayan";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(22, 678);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 26);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Passenger:";
			// 
			// textBox1
			// 
			this->textBox1->AccessibleDescription = L"";
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(160, 678);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 30);
			this->textBox1->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(80, 733);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 26);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Cash:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(160, 730);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(191, 30);
			this->textBox2->TabIndex = 25;
			// 
			// enter
			// 
			this->enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->enter->Location = System::Drawing::Point(360, 678);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(121, 81);
			this->enter->TabIndex = 26;
			this->enter->Text = L"ENTER";
			this->enter->UseVisualStyleBackColor = true;
			this->enter->Click += gcnew System::EventHandler(this, &MyForm::enter_Click);
			// 
			// change
			// 
			this->change->AutoSize = true;
			this->change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->change->Location = System::Drawing::Point(666, 678);
			this->change->Name = L"change";
			this->change->Size = System::Drawing::Size(61, 26);
			this->change->TabIndex = 29;
			this->change->Text = L".......";
			// 
			// student
			// 
			this->student->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->student->Location = System::Drawing::Point(44, 517);
			this->student->Name = L"student";
			this->student->Size = System::Drawing::Size(183, 39);
			this->student->TabIndex = 30;
			this->student->Text = L"Student";
			this->student->UseVisualStyleBackColor = true;
			this->student->Click += gcnew System::EventHandler(this, &MyForm::student_Click);
			// 
			// SeniorCitizen
			// 
			this->SeniorCitizen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeniorCitizen->Location = System::Drawing::Point(233, 517);
			this->SeniorCitizen->Name = L"SeniorCitizen";
			this->SeniorCitizen->Size = System::Drawing::Size(183, 39);
			this->SeniorCitizen->TabIndex = 31;
			this->SeniorCitizen->Text = L"Senior Citizen";
			this->SeniorCitizen->UseVisualStyleBackColor = true;
			this->SeniorCitizen->Click += gcnew System::EventHandler(this, &MyForm::SeniorCitizen_Click);
			// 
			// Pregnant
			// 
			this->Pregnant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pregnant->Location = System::Drawing::Point(422, 517);
			this->Pregnant->Name = L"Pregnant";
			this->Pregnant->Size = System::Drawing::Size(183, 39);
			this->Pregnant->TabIndex = 32;
			this->Pregnant->Text = L"Pregnant";
			this->Pregnant->UseVisualStyleBackColor = true;
			this->Pregnant->Click += gcnew System::EventHandler(this, &MyForm::Pregnant_Click);
			// 
			// PWD
			// 
			this->PWD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PWD->Location = System::Drawing::Point(611, 517);
			this->PWD->Name = L"PWD";
			this->PWD->Size = System::Drawing::Size(183, 39);
			this->PWD->TabIndex = 33;
			this->PWD->Text = L"PWD";
			this->PWD->UseVisualStyleBackColor = true;
			this->PWD->Click += gcnew System::EventHandler(this, &MyForm::PWD_Click);
			// 
			// Regularpassenger
			// 
			this->Regularpassenger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Regularpassenger->Location = System::Drawing::Point(800, 517);
			this->Regularpassenger->Name = L"Regularpassenger";
			this->Regularpassenger->Size = System::Drawing::Size(183, 39);
			this->Regularpassenger->TabIndex = 34;
			this->Regularpassenger->Text = L"Regular passenger";
			this->Regularpassenger->UseVisualStyleBackColor = true;
			this->Regularpassenger->Click += gcnew System::EventHandler(this, &MyForm::Regularpassenger_Click);
			// 
			// from
			// 
			this->from->AutoSize = true;
			this->from->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->from->Location = System::Drawing::Point(71, 479);
			this->from->Name = L"from";
			this->from->Size = System::Drawing::Size(49, 13);
			this->from->TabIndex = 36;
			this->from->Text = L"INVALID";
			// 
			// destination
			// 
			this->destination->AutoSize = true;
			this->destination->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->destination->Location = System::Drawing::Point(809, 479);
			this->destination->Name = L"destination";
			this->destination->Size = System::Drawing::Size(49, 13);
			this->destination->TabIndex = 37;
			this->destination->Text = L"INVALID";
			// 
			// discount
			// 
			this->discount->AutoSize = true;
			this->discount->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->discount->Location = System::Drawing::Point(71, 581);
			this->discount->Name = L"discount";
			this->discount->Size = System::Drawing::Size(49, 13);
			this->discount->TabIndex = 38;
			this->discount->Text = L"INVALID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(569, 678);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 26);
			this->label7->TabIndex = 39;
			this->label7->Text = L"Change:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label8->Location = System::Drawing::Point(668, 712);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 40;
			this->label8->Text = L"OUTPUT";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label9->Location = System::Drawing::Point(668, 725);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 41;
			this->label9->Text = L"OUTPUT";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label10->Location = System::Drawing::Point(668, 738);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 42;
			this->label10->Text = L"OUTPUT";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label11->Location = System::Drawing::Point(668, 751);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 13);
			this->label11->TabIndex = 43;
			this->label11->Text = L"10000";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label12->Location = System::Drawing::Point(668, 764);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 44;
			this->label12->Text = L"OUTPUT";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(1025, 868);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->discount);
			this->Controls->Add(this->destination);
			this->Controls->Add(this->from);
			this->Controls->Add(this->Regularpassenger);
			this->Controls->Add(this->PWD);
			this->Controls->Add(this->Pregnant);
			this->Controls->Add(this->SeniorCitizen);
			this->Controls->Add(this->student);
			this->Controls->Add(this->change);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Malaria);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		from -> Text = "1";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		from -> Text = "2";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		from -> Text = "3";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		from -> Text = "4";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		from -> Text = "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		from -> Text = "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		destination->Text = "1";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		destination->Text = "2";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		destination->Text = "3";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		destination->Text = "4";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		destination->Text = "5";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		destination->Text = "6";
	}
	private: System::Void student_Click(System::Object^ sender, System::EventArgs^ e) {
		discount->Text = "1";
	}
	private: System::Void SeniorCitizen_Click(System::Object^ sender, System::EventArgs^ e) {
		discount->Text = "2";
	}
	private: System::Void Pregnant_Click(System::Object^ sender, System::EventArgs^ e) {
		discount->Text = "3";
	}
	private: System::Void PWD_Click(System::Object^ sender, System::EventArgs^ e) {
		discount->Text = "4";
	}
	private: System::Void Regularpassenger_Click(System::Object^ sender, System::EventArgs^ e) {
		discount->Text = "5";
	}
	private: System::Void enter_Click(System::Object^ sender, System::EventArgs^ e) {

		if (from->Text == "INVALID") {
			MessageBox::Show("YOU MIGHT NOT CLICK THE CURRENT LOCATION!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if(destination->Text == "INVALID") {
			MessageBox::Show("YOU MIGHT NOT CLICK THE DESTINATION!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (discount->Text == "INVALID") {
			MessageBox::Show("YOU MIGHT NOT CLICK THE DISCOUNT!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (textBox1->Text == "") {
			MessageBox::Show("YOU HAVE TO INPUT THE NO# OF PASSENGER!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (textBox2->Text == "") {
			MessageBox::Show("YOU HAVE TO INPUT THE AMOUNT!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			int input1 = System::Convert::ToInt16(from->Text);
			int input2 = System::Convert::ToInt16(destination->Text);
			int input3 = System::Convert::ToInt16(discount->Text);
			int passenger = System::Convert::ToInt16(textBox1->Text);
			int cash = System::Convert::ToInt16(textBox2->Text);
			int receiptNO = System::Convert::ToInt16(label11->Text);
			int total = 0, final_total = 0, change_total = 0;
		
				if (input1 == 1 && input2 == 2) {
					//Malaria to Amparo
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text,label8->Text,change->Text,label10->Text,label11->Text,label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 1 && input2 == 3) {
					//Malaria to Pangarap
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 1 && input2 == 4) {
					//Malaria to SM Fairview
					int from = 18;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 1 && input2 == 5) {
					//Malaria to Lagro
					int from = 17;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 1 && input2 == 6) {
					//Malaria to Bayan
					int from = 25;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if(input1 == 1 && input2 == 1){
					//safety measures
					MessageBox::Show("Malaria to Malaria", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (input1 == 2 && input2 == 1) {
					//Amparo to Malaria
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 2 && input2 == 3) {
					//Amparo to Pangarap
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 2 && input2 == 4) {
					//Amparo to SM
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 2 && input2 == 5) {
					//Amparo to lagro
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 2 && input2 == 6) {
					//Amparo to bayan
					int from = 17;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 2 && input2 == 2) {
					//safety measures
					MessageBox::Show("Amparo to Amparo", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (input1 == 3 && input2 == 1) {
					//pangarap to Malaria
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 3 && input2 == 2) {
					//pangarap to Amparo
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 3 && input2 == 4) {
					//pangarap to SM
					int from = 17;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 3 && input2 == 5) {
					//pangarap to lagro
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 3 && input2 == 6) {
					//pangarap to bayan
					int from = 18;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 3 && input2 == 3) {
					MessageBox::Show("Pangarap to Pangarap", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (input1 == 4 && input2 == 1) {
					//SM to malaria
					int from = 18;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 4 && input2 == 2) {
					//SM to amparo
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 4 && input2 == 3) {
					//SM to pangarap
					int from = 17;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 4 && input2 == 5) {
					//SM to lagro
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 4 && input2 == 6) {
					//SM to bayan 
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 4 && input2 == 4) {
					//safety measures
					MessageBox::Show("SM fairview to SM fairview", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (input1 == 5 && input2 == 1) {
					//lagro to malaria
					int from = 17;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 5 && input2 == 2) {
					//lagro to amparo
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 5 && input2 == 3) {
					//lagro to pangarap
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 5 && input2 == 4) {
					//lagro to sm
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 5 && input2 == 6) {
					//lagro to bayan
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 5 && input2 == 5) {
					//safety measures
					MessageBox::Show("Lagro to Lagro", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (input1 == 6 && input2 == 1) {
					//bayan to malaria
					int from = 25;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 6 && input2 == 2) {
					//bayan to amparo
					int from = 17;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 6 && input2 == 3) {
					//bayan to pangarap
					int from = 18;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 6 && input2 == 4) {
					//bayan to SM
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 6 && input2 == 5) {
					//bayan to lagro
					int from = 14;

					if (input3 == 1) {
						//student discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Student";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}

					}
					else if (input3 == 2) {
						//senior citizen discount
						total = from - 3;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Senior citizen";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}


					}
					else if (input3 == 3) {
						//pregnant discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Pregnant";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else if (input3 == 4) {
						//PWD discount
						total = from - 2;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "PWD";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
					else {
						//regular discount
						total = from;
						final_total = passenger * total;

						if (cash < final_total) {
							//ERROR msg for insufficient payment
							MessageBox::Show("Insufficient Payment", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							label7->Text = "Total:";
							//guide of how much they will to pay
							change->Text = System::Convert::ToString(final_total);
						}
						else {
							change_total = cash - final_total;
							label7->Text = "Change:";
							//change
							change->Text = System::Convert::ToString(change_total);
							//cash
							label8->Text = System::Convert::ToString(cash);
							//total
							label9->Text = System::Convert::ToString(final_total);
							//passenger
							label10->Text = System::Convert::ToString(passenger);
							//Receipt Number
							receiptNO++;
							label11->Text = System::Convert::ToString(receiptNO);
							//discount icon
							label12->Text = "Regular";

							//receipt--pop up new window form for receipt 
							receipt^ Receipt = gcnew receipt(label9->Text, label8->Text, change->Text, label10->Text, label11->Text, label12->Text);
							Receipt->ShowDialog();
						}
					}
				}
				else if (input1 == 6 && input2 == 6) {
					//safety measures
					MessageBox::Show("Bayan to Bayan", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
		}
	}
};
}

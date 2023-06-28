#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for receipt
	/// </summary>
	public ref class receipt : public System::Windows::Forms::Form
	{
	public:
		receipt(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		receipt(String^data,String^data2,String^data3,String^data4,String^data5,String^data6)
		{
			InitializeComponent();
			//total
			label19->Text = data;
			//cash
			label20->Text = data2;
			//change
			label21->Text = data3;
			//passenger
			label22->Text = data4;
			//receipt number
			label23->Text = data5;
			//icon discount
			label24->Text = data6;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~receipt()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(43, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"M.J. Transportation Company";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(56, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"BRGY 185, Malaria Road, \r\nZone 16 District 1, Caloocan City";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"---------------------------------------------------------------------------------"
				L"---";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(67, 389);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"THIS IS AN OFFICIAL RECEIPT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(56, 349);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 26);
			this->label5->TabIndex = 5;
			this->label5->Text = L"BRGY 185, Malaria Road, \r\nZone 16 District 1, Caloocan City";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(251, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Sold To:__________________________________";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(251, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Name:   __________________________________";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 311);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(252, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Address:  _________________________________";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 324);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(250, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"TIN:_____________________________________";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(34, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 15);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Fare";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(34, 206);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 15);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Passenger:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(34, 142);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(38, 15);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Cash:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(34, 174);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 15);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Change:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(34, 272);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Receipt NO. :";
			this->label14->Click += gcnew System::EventHandler(this, &receipt::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(111, 376);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"THANK YOU";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(249, 117);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 13);
			this->label16->TabIndex = 16;
			this->label16->Text = L"P";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(249, 142);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 13);
			this->label17->TabIndex = 17;
			this->label17->Text = L"P";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(249, 176);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(15, 13);
			this->label18->TabIndex = 18;
			this->label18->Text = L"P";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(259, 117);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 13);
			this->label19->TabIndex = 19;
			this->label19->Text = L"...";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(259, 144);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 13);
			this->label20->TabIndex = 20;
			this->label20->Text = L"...";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(259, 176);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 13);
			this->label21->TabIndex = 21;
			this->label21->Text = L"...";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(259, 208);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(16, 13);
			this->label22->TabIndex = 22;
			this->label22->Text = L"...";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(101, 272);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(16, 13);
			this->label23->TabIndex = 23;
			this->label23->Text = L"...";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(136, 87);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(19, 13);
			this->label24->TabIndex = 24;
			this->label24->Text = L"...";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 411);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"receipt";
			this->Text = L"receipt";
			this->Load += gcnew System::EventHandler(this, &receipt::receipt_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void receipt_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

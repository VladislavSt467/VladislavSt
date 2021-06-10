#pragma once


namespace VladKursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::Button^ clear;



	private: System::Windows::Forms::Label^ during;

	private: System::Windows::Forms::Label^ day;
	private: System::Windows::Forms::Label^ text;
	private: System::Windows::Forms::TextBox^ sum;





	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->during = (gcnew System::Windows::Forms::Label());
			this->day = (gcnew System::Windows::Forms::Label());
			this->text = (gcnew System::Windows::Forms::Label());
			this->sum = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(33, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(33, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 26);
			this->textBox2->TabIndex = 1;
			// 
			// calculate
			// 
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->calculate->Location = System::Drawing::Point(20, 223);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(95, 26);
			this->calculate->TabIndex = 2;
			this->calculate->Text = L"Вычислить";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &Calculator::calculate_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->clear->Location = System::Drawing::Point(125, 223);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(95, 26);
			this->clear->TabIndex = 3;
			this->clear->Text = L"Очистить";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &Calculator::clear_Click);
			// 
			// during
			// 
			this->during->AutoSize = true;
			this->during->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->during->Location = System::Drawing::Point(40, 28);
			this->during->Name = L"during";
			this->during->Size = System::Drawing::Size(162, 20);
			this->during->TabIndex = 4;
			this->during->Text = L"Длительность [мин]";
			// 
			// day
			// 
			this->day->AutoSize = true;
			this->day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->day->Location = System::Drawing::Point(49, 98);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(153, 20);
			this->day->TabIndex = 5;
			this->day->Text = L"Номер дня недели";
			// 
			// text
			// 
			this->text->AutoSize = true;
			this->text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->text->Location = System::Drawing::Point(75, 150);
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(86, 18);
			this->text->TabIndex = 6;
			this->text->Text = L"Стоимость";
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->sum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->sum->Location = System::Drawing::Point(96, 183);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(115, 14);
			this->sum->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label1->Location = System::Drawing::Point(30, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"К оплате";
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(234, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->text);
			this->Controls->Add(this->day);
			this->Controls->Add(this->during);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Calculator";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void calculate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e);

	};
}

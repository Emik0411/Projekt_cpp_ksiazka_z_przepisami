#pragma once
#include "PrzygotowanieForm.h"

namespace Projektcppksiazkazprzepisami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o SkladnikiForm
	/// </summary>
	public ref class SkladnikiForm : public System::Windows::Forms::Form
	{
	public:
		int^ Numer;
		SkladnikiForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~SkladnikiForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(347, 130);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(65, 22);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &SkladnikiForm::numericUpDown1_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SkladnikiForm::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(548, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 38);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Następny";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SkladnikiForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(518, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 59);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Koniec";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SkladnikiForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(77, 195);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(306, 260);
			this->listBox1->TabIndex = 12;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SkladnikiForm::listBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"gram", L"dekagram", L"kilogram", L"litr", L"mililitr",
					L"Łyżka", L"Łyżeczka", L"Szklanka", L"Szczypta"
			});
			this->comboBox1->Location = System::Drawing::Point(432, 129);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(110, 24);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SkladnikiForm::comboBox1_SelectedIndexChanged);
			// 
			// SkladnikiForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 495);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Name = L"SkladnikiForm";
			this->Text = L"SkladnikiForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	PrzygotowanieForm^ objSk = gcnew PrzygotowanieForm();
	objSk->Numerp = Numer;
	objSk->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Skladnik = textBox1->Text;
	String^ Ilosc = numericUpDown1->Text;
	String^ Jednostka = comboBox1->Text;
	conn->Open();

	String^ cmdString = "INSERT INTO Skladniki_do_przepisu (ID_przepisu, ID_skladnika, ilosc_skladnika, jednostka) VALUES (@ID_przepisu, @ID_skladnika, @ilosc_skladnika, @jednostka)";
	MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

	cmd->Parameters->AddWithValue("@ID_skladnika", Skladnik);
	cmd->Parameters->AddWithValue("@ID_przepisu", Numer);
	cmd->Parameters->AddWithValue("@ilosc_skladnika", Ilosc);
	cmd->Parameters->AddWithValue("@jednostka", Jednostka);
	cmd->ExecuteNonQuery();
	conn->Close();

	listBox1->Items->Add(Skladnik + " - " + Ilosc + " " + Jednostka);

	textBox1->Clear();
	numericUpDown1->Value = 0;




}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

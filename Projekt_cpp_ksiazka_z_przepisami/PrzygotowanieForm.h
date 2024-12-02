#pragma once
//#include "MainForm.h"


namespace Projektcppksiazkazprzepisami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o PrzygotowanieForm
	/// </summary>
	public ref class PrzygotowanieForm : public System::Windows::Forms::Form
	{
	public:
		
		int^ Numerp;
		int numer_krok = 1;
		
		PrzygotowanieForm(void)
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
		~PrzygotowanieForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;



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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(420, 347);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 59);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Koniec";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PrzygotowanieForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(363, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 38);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Następny";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PrzygotowanieForm::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(60, 115);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(222, 205);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &PrzygotowanieForm::richTextBox1_TextChanged);
			// 
			// PrzygotowanieForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 418);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Name = L"PrzygotowanieForm";
			this->Text = L"PrzygotowanieForm";
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		//MainForm^ obj = gcnew MainForm();
		//obj->ShowDialog();
		//obj1->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Krok = richTextBox1->Text;

	conn->Open();

	String^ cmdString = "INSERT INTO Przygotowanie_przepisy (ID_przepisu, ID_nr_przygotowania, opis) VALUES (@ID_przepisu, @ID_nr_przygotowania, @opis)";
	MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

	cmd->Parameters->AddWithValue("@ID_przepisu", Numerp);
	cmd->Parameters->AddWithValue("@ID_nr_przygotowania", numer_krok);
	cmd->Parameters->AddWithValue("@opis", Krok);
	cmd->ExecuteNonQuery();
	conn->Close();

	numer_krok+=1;
	richTextBox1->Clear();

}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

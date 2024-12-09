#pragma once
#include "DodawanieForm.h"
#include <string>

namespace Projektcppksiazkazprzepisami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o przeglad
	/// </summary>
	public ref class przeglad : public System::Windows::Forms::Form
	{
	public:
		private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public:
		Form ^obj;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	public:

		   int^ Id_przepisu;
		przeglad(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		przeglad(Form ^objprzeglad)
		{
			obj = objprzeglad;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~przeglad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dodawanie";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &przeglad::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(149, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Oglądanie";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &przeglad::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nazwa przepisu";
			this->label1->Click += gcnew System::EventHandler(this, &przeglad::label1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(40, 163);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(173, 225);
			this->checkedListBox1->TabIndex = 4;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &przeglad::checkedListBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(307, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Przygotowanie";
			this->label2->Click += gcnew System::EventHandler(this, &przeglad::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(280, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(290, 273);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(19, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 36);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Edytuj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &przeglad::button3_Click);
			// 
			// przeglad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 472);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"przeglad";
			this->Text = L"przeglad";
			this->Load += gcnew System::EventHandler(this, &przeglad::przeglad_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DodawanieForm^ objdod = gcnew DodawanieForm();
		objdod->ShowDialog();
	}
	private: System::Void przeglad_Load(System::Object^ sender, System::EventArgs^ e) {

		String^ Nazwa_przepisu;

		conn->Open();


		String^ cmdString = "SELECT ID_skladnika, ilosc_skladnika, jednostka FROM skladniki_do_przepisu WHERE ID_przepisu ='" + Id_przepisu + "'";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		MySqlDataReader^ reader;
		reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			String^ nazwa;
			String^ calosc;
			nazwa = reader->GetString("ID_skladnika");

			calosc = calosc + nazwa;
			nazwa = reader->GetString("ilosc_skladnika");
			calosc = calosc + " - " + nazwa;
			nazwa = reader->GetString("jednostka");
			calosc = calosc + " " + nazwa;

			checkedListBox1->Items->Add(calosc);
		}

		conn->Close();
		conn->Open();

		String^ cmdString1 = "SELECT ID_nr_przygotowania, opis FROM przygotowanie_przepisy WHERE ID_przepisu ='" + Id_przepisu + "'";
		MySqlCommand^ cmd1 = gcnew MySqlCommand(cmdString1, conn);
		String^ calosc1;
		MySqlDataReader^ reader1;
		reader1 = cmd1->ExecuteReader();
		while (reader1->Read())
		{
			String^ nazwa;
			
			nazwa = reader1->GetString("ID_nr_przygotowania");

			calosc1 = calosc1 + nazwa + ". ";
			nazwa = reader1->GetString("opis");

			calosc1 = calosc1 + nazwa + "\n";
		}

		label2->Text = calosc1;
		conn->Close();

		
		conn->Open();

		String^ cmdString2 = "SELECT Nazwa_przepisu FROM Wszystkie_przepisy WHERE ID_przepisu = '" + Id_przepisu + "'";
		MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);

		MySqlDataReader^ reader2;
		reader2 = cmd2->ExecuteReader();
		while (reader2->Read())
		{
			String^ nazwa;
			nazwa = reader2->GetString("Nazwa_przepisu");
			Nazwa_przepisu = nazwa;
		}
		label1->Text = Nazwa_przepisu;
		//cmd->ExecuteNonQuery();
		conn->Close();
		String^ direct = Id_przepisu + "\\" + "tytul.png";
		if (File::Exists(direct))
		{
			
			Bitmap^ bit = gcnew Bitmap(direct);
			pictureBox1->Image = bit;
		}
		
		

	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

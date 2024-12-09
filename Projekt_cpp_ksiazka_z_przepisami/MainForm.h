#pragma once
#include "DodawanieForm.h"
#include "SkladnikiForm.h"
#include "PrzygotowanieForm.h"
#include "przeglad.h"

#include <string>



namespace Projektcppksiazkazprzepisami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;



	/// <summary>
	/// Podsumowanie informacji o MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		
		
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;







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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 11);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dodawanie";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 99);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(261, 276);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(138, 11);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Oglądanie";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(208, 381);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 10);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(293, 164);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 64);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Wybierz";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(293, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 58);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Usuń";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 429);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DodawanieForm ^obj1 = gcnew DodawanieForm(this);
		obj1->ShowDialog();

		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
		

		
		conn->Open();


		String^ cmdString = "SELECT Nazwa_przepisu FROM Wszystkie_przepisy";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		MySqlDataReader^ reader;
		reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			String^ nazwa;
			nazwa = reader->GetString("nazwa_przepisu");
			listBox1->Items->Add(nazwa);
		}

		//cmd->ExecuteNonQuery();
		conn->Close();

	}


private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	//PrzygotowanieForm^ obj2 = gcnew PrzygotowanieForm(this);
	//PrzygotowanieForm ^objprze = gcnew PrzygotowanieForm(this);
	//obj2->ShowDialog();


}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	przeglad ^objprzeglad = gcnew przeglad(this);
	objprzeglad->StartPosition = FormStartPosition::Manual; // Pozycja
	objprzeglad->Location = this->Location;                //
	
	String^ nazwa_przepisu = listBox1->SelectedItem->ToString();
	
	conn->Open();

	String^ cmdString = "SELECT ID_przepisu FROM Wszystkie_przepisy WHERE nazwa_przepisu = '" + nazwa_przepisu + "'";
	MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
	MySqlDataReader^ reader;
	reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		int^ nazwa;
		nazwa = reader->GetInt32("ID_przepisu");

		
		objprzeglad->Id_przepisu = nazwa;
	}

	conn->Close();

	objprzeglad->ShowDialog();


	//String^ nazwa_przepisu = listBox1->SelectedItem->ToString();
	
	//label5->Text = nazwa_przepisu;

	//String^ Skladniki;

	//conn->Open();
//
	//String^ cmdString = "SELECT ID_przepisu FROM Wszystkie_przepisy WHERE nazwa_przepisu = " + nazwa_przepisu + "";
	//MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

	

	//MySqlDataReader^ reader;
	//reader = cmd->ExecuteReader();
	//String^ nazwa;
	//while (reader->Read())
	//{
		
	//	nazwa = reader->GetString("ID_przepisu");
		


	//}
	//conn->Close();
	//conn->Open();
//	String^ cmdString1 = "SELECT ID_skladnika FROM Skladniki_do_przepisu WHERE ID_przepisu = " + nazwa + "";
	//MySqlCommand^ cmd1 = gcnew MySqlCommand(cmdString1, conn);
	///MySqlDataReader^ reader1;
	//reader = cmd->ExecuteReader();
	
	//while (reader1->Read())
	//{
	//	String^ Skladik;
	//	Skladik = reader1->GetString("ID_skladnika");

	//	Skladniki = Skladniki + Skladik + "\n";
//

	//}




	//cmd->ExecuteNonQuery();
	//conn->Close();


	//label3->Text = Skladniki;

}
//private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
//}
//private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
//}
};
}

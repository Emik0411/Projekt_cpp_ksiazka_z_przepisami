#pragma once
#include "SkladnikiForm.h"




namespace Projektcppksiazkazprzepisami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	using namespace System::IO; // do zapisywania w pliku

	/// <summary>
	/// Podsumowanie informacji o DodawanieForm
	/// </summary>
	public ref class DodawanieForm : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		String^ nazwa = "";
		int^ EdycjaDodawanie;
		int^ IDDodawanie;
		DodawanieForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		DodawanieForm(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~DodawanieForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;










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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(159, 8);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Oglądanie";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DodawanieForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 79);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(377, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &DodawanieForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nazwa przepisu";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(288, 351);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 52);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Zapisz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DodawanieForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 353);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(11, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 30);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Dodawanie";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DodawanieForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(421, 78);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 41);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Zdjęcie";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DodawanieForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(43, 140);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(346, 191);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &DodawanieForm::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"label2";
			// 
			// DodawanieForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 417);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DodawanieForm";
			this->Text = L"DodawanieForm";
			this->Load += gcnew System::EventHandler(this, &DodawanieForm::DodawanieForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

	MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void DodawanieForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//
		//Przejściowy^ objprzejs = gcnew Przejściowy(this);
		
			
			
		

		
	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//String ^nazwa_pliku;
	//nazwa_pliku = "Pliki/" + textBox2->Text + ".txt";
	

	

	//StreamWriter^ Plik = gcnew StreamWriter(nazwa_pliku);
	

	//Plik->Close();
	
	String^ Nazwa = textBox2->Text;
	
		
		conn->Open();

		String^ cmdString = "INSERT INTO Wszystkie_przepisy (Nazwa_przepisu, Istnienie) VALUES (@Nazwa, @Istnienie)";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		cmd->Parameters->AddWithValue("@Nazwa", Nazwa);
		cmd->Parameters->AddWithValue("@Istnienie", "Tak");
		cmd->ExecuteNonQuery();
		String^ cmd1String = "SELECT LAST_INSERT_ID()";
		MySqlCommand^ cmd1 = gcnew MySqlCommand(cmd1String, conn);
		MySqlDataReader^ reader = cmd1->ExecuteReader();

		reader->Read();
		String^ id_string = reader->GetString(0);
		int^ id = reader->GetInt32(0);

		conn->Close();
		this->Hide();
		SkladnikiForm^ objSk1 = gcnew SkladnikiForm();

		

		objSk1->Numer = id;

		objSk1->ShowDialog();


		System::IO::Directory::CreateDirectory(id_string);

		if (nazwa != "")
		{
			Bitmap^ bit = gcnew Bitmap(nazwa);
			SaveFileDialog^ zapisek = gcnew SaveFileDialog;
			String^ tytul = id_string + "\\" + "tytul.png";
			bit->Save(tytul);

		}
	
	



}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Clear();
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ Mystreamdodatek;
	OpenFileDialog^ openFileDialogDodatek = gcnew OpenFileDialog;
	//openFileDialogDodatek->ShowDialog();

	//openFileDialogDodatek->InitialDirectory = "c:\\";
	//openFileDialogDodatek->Filter = "txt files (*.txt)|*.txt|All files(*.*)|*.*";
	//openFileDialogDodatek->FilterIndex = 2;
	//openFileDialogDodatek->RestoreDirectory = true;
	

	if (openFileDialogDodatek->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((Mystreamdodatek = openFileDialogDodatek->OpenFile()) != nullptr)
		{
			
			nazwa = openFileDialogDodatek->FileName;



		Mystreamdodatek->Close();
		}
		
	}

	label2->Text = nazwa;
	Bitmap^ bit = gcnew Bitmap(nazwa);
	pictureBox1->Image = bit;
	

}
private: System::Void openFileDialog1_FileOk_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {


}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

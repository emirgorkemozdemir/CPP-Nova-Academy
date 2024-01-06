#pragma once
#include "MyConnection.h"
#include "HashSHA256.h"

namespace DatabaseOperationsCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tboxUsername;
	private: System::Windows::Forms::TextBox^ tboxMail;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ tboxPassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ tboxAdress;
	private: System::Windows::Forms::Button^ btnRegister;

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
			this->tboxUsername = (gcnew System::Windows::Forms::TextBox());
			this->tboxMail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tboxPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tboxAdress = (gcnew System::Windows::Forms::RichTextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tboxUsername
			// 
			this->tboxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxUsername->Location = System::Drawing::Point(256, 64);
			this->tboxUsername->Name = L"tboxUsername";
			this->tboxUsername->Size = System::Drawing::Size(447, 53);
			this->tboxUsername->TabIndex = 0;
			// 
			// tboxMail
			// 
			this->tboxMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxMail->Location = System::Drawing::Point(256, 347);
			this->tboxMail->Name = L"tboxMail";
			this->tboxMail->Size = System::Drawing::Size(447, 53);
			this->tboxMail->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(369, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Kullanıcı Adı";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(445, 298);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Mail";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(436, 430);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Adres";
			// 
			// tboxPassword
			// 
			this->tboxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxPassword->Location = System::Drawing::Point(256, 190);
			this->tboxPassword->Name = L"tboxPassword";
			this->tboxPassword->PasswordChar = '*';
			this->tboxPassword->Size = System::Drawing::Size(447, 53);
			this->tboxPassword->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(445, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 46);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Şifre";
			// 
			// tboxAdress
			// 
			this->tboxAdress->Location = System::Drawing::Point(256, 479);
			this->tboxAdress->Name = L"tboxAdress";
			this->tboxAdress->Size = System::Drawing::Size(447, 89);
			this->tboxAdress->TabIndex = 8;
			this->tboxAdress->Text = L"";
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->btnRegister->Location = System::Drawing::Point(384, 613);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(223, 54);
			this->btnRegister->TabIndex = 9;
			this->btnRegister->Text = L"Kayıt Ol";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Register::btnRegister_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 679);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->tboxAdress);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tboxPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tboxMail);
			this->Controls->Add(this->tboxUsername);
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {

		if (tboxUsername->Text=="" || tboxPassword->Text=="" || tboxMail->Text=="" || tboxAdress->Text=="")
		{

		}
		else
		{
			// HashSHA256 isimli classtan bir nesne oluşturdum
			HashSHA256^ my_hash_prop = gcnew HashSHA256;
			String^ hashed_password = my_hash_prop->ComputeSHA256(tboxPassword->Text);

			// MyConnection nesnesi oluşturmak zorundayım
		    // Çünkü, bağlantı ve bağlantının açık olup olmadığını
			// kontrol eden nesnelerim MyConnection içerisinde

			MyConnection^ connection_nesnesi = gcnew MyConnection();

			// Oluşturduğum metodu çalıştırdım ve bağlantının
			// açık olup olmadığını kontrol ettim
			connection_nesnesi->CheckConnection();


			// query yani sorgu, sqlde gördüğümüzün aynısı. o an ne yapmak istiyorsak ona göre query yazmamız lazım
			String^ insert_query = "INSERT INTO TablePeople (PeopleUserName,PeoplePassword,PeopleMail,PeopleAdress) values (@pusername,@ppassword,@pmail,@padress)";
			SqlCommand insert_command(insert_query, connection_nesnesi->connection);

			// command'e parametre ekledik
			insert_command.Parameters->AddWithValue("@pusername", tboxUsername->Text);
			insert_command.Parameters->AddWithValue("@ppassword", hashed_password);
			insert_command.Parameters->AddWithValue("@pmail", tboxMail->Text);
			insert_command.Parameters->AddWithValue("@padress", tboxAdress->Text);

			insert_command.ExecuteNonQuery();
		}

	}
};
}

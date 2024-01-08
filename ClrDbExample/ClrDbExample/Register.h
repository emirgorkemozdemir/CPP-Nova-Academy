#pragma once
#include "MyConnection.h"
#include "sha1hash.h"



namespace ClrDbExample {

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
	private: System::Windows::Forms::Button^ btnRegister;
	protected:
	private: System::Windows::Forms::RichTextBox^ tboxAdress;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ tboxPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tboxMail;
	private: System::Windows::Forms::TextBox^ tboxUsername;
	private: System::Windows::Forms::Button^ btnGoToLogin;

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
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->tboxAdress = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tboxPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tboxMail = (gcnew System::Windows::Forms::TextBox());
			this->tboxUsername = (gcnew System::Windows::Forms::TextBox());
			this->btnGoToLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->btnRegister->Location = System::Drawing::Point(207, 612);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(223, 54);
			this->btnRegister->TabIndex = 18;
			this->btnRegister->Text = L"Kayıt Ol";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Register::btnRegister_Click);
			// 
			// tboxAdress
			// 
			this->tboxAdress->Location = System::Drawing::Point(207, 494);
			this->tboxAdress->Name = L"tboxAdress";
			this->tboxAdress->Size = System::Drawing::Size(447, 89);
			this->tboxAdress->TabIndex = 17;
			this->tboxAdress->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(396, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 46);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Şifre";
			// 
			// tboxPassword
			// 
			this->tboxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxPassword->Location = System::Drawing::Point(207, 205);
			this->tboxPassword->Name = L"tboxPassword";
			this->tboxPassword->PasswordChar = '*';
			this->tboxPassword->Size = System::Drawing::Size(447, 53);
			this->tboxPassword->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(387, 445);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 46);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Adres";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(396, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 46);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Mail";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(320, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 46);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Kullanıcı Adı";
			// 
			// tboxMail
			// 
			this->tboxMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxMail->Location = System::Drawing::Point(207, 362);
			this->tboxMail->Name = L"tboxMail";
			this->tboxMail->Size = System::Drawing::Size(447, 53);
			this->tboxMail->TabIndex = 11;
			// 
			// tboxUsername
			// 
			this->tboxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxUsername->Location = System::Drawing::Point(207, 79);
			this->tboxUsername->Name = L"tboxUsername";
			this->tboxUsername->Size = System::Drawing::Size(447, 53);
			this->tboxUsername->TabIndex = 10;
			// 
			// btnGoToLogin
			// 
			this->btnGoToLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->btnGoToLogin->Location = System::Drawing::Point(468, 612);
			this->btnGoToLogin->Name = L"btnGoToLogin";
			this->btnGoToLogin->Size = System::Drawing::Size(186, 54);
			this->btnGoToLogin->TabIndex = 19;
			this->btnGoToLogin->Text = L"Giriş Yap";
			this->btnGoToLogin->UseVisualStyleBackColor = true;
			this->btnGoToLogin->Click += gcnew System::EventHandler(this, &Register::btnGoToLogin_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 941);
			this->Controls->Add(this->btnGoToLogin);
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

	
		String^ hashed_password = sha1hash::sha1(tboxPassword->Text);

		MyConnection::CheckConnection();

		SqlCommand insert_command("INSERT INTO TablePeople (PeopleUserName,PeoplePassword,PeopleMail,PeopleAdress) values (@pusername,@ppassword,@pmail,@padress)", MyConnection::connection);

		insert_command.Parameters->AddWithValue("@pusername", tboxUsername->Text);
		insert_command.Parameters->AddWithValue("@ppassword", hashed_password);
		insert_command.Parameters->AddWithValue("@pmail", tboxMail->Text);
		insert_command.Parameters->AddWithValue("@padress", tboxAdress->Text);

		insert_command.ExecuteNonQuery();
	
	}
private: System::Void btnGoToLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}

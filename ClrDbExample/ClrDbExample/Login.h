#pragma once
#include "MyConnection.h"
#include "sha1hash.h"
#include "Register.h"


namespace ClrDbExample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogin;
	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ tboxPassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tboxUsername;
	private: System::Windows::Forms::Button^ btnGoToRegister;

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
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tboxPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tboxUsername = (gcnew System::Windows::Forms::TextBox());
			this->btnGoToRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->btnLogin->Location = System::Drawing::Point(295, 310);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(199, 77);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Giriş Yap";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(354, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 46);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Şifre";
			// 
			// tboxPassword
			// 
			this->tboxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxPassword->Location = System::Drawing::Point(165, 251);
			this->tboxPassword->Name = L"tboxPassword";
			this->tboxPassword->Size = System::Drawing::Size(447, 53);
			this->tboxPassword->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(278, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 46);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Kullanıcı Adı";
			// 
			// tboxUsername
			// 
			this->tboxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxUsername->Location = System::Drawing::Point(165, 125);
			this->tboxUsername->Name = L"tboxUsername";
			this->tboxUsername->Size = System::Drawing::Size(447, 53);
			this->tboxUsername->TabIndex = 17;
			// 
			// btnGoToRegister
			// 
			this->btnGoToRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->btnGoToRegister->Location = System::Drawing::Point(295, 408);
			this->btnGoToRegister->Name = L"btnGoToRegister";
			this->btnGoToRegister->Size = System::Drawing::Size(199, 77);
			this->btnGoToRegister->TabIndex = 21;
			this->btnGoToRegister->Text = L"Kayıt Ol";
			this->btnGoToRegister->UseVisualStyleBackColor = true;
			this->btnGoToRegister->Click += gcnew System::EventHandler(this, &Login::btnGoToRegister_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 497);
			this->Controls->Add(this->btnGoToRegister);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tboxPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tboxUsername);
			this->Controls->Add(this->btnLogin);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		MyConnection::CheckConnection();

		SqlCommand login_command("SELECT PeopleUserName,PeoplePassword FROM TablePeople WHERE PeopleUserName=@pusername and PeoplePassword=@ppassword", MyConnection::connection);

		login_command.Parameters->AddWithValue("pusername", tboxUsername->Text);
		login_command.Parameters->AddWithValue("ppassword", sha1hash::sha1(tboxPassword->Text));

		SqlDataReader^ login_dr = login_command.ExecuteReader();


		if (login_dr->HasRows)
		{
			MessageBox::Show("Giris basarılı");
		}
		else
		{
			MessageBox::Show("Giris basarısız");
		}

		login_dr->Close();
	}
	private: System::Void btnGoToRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Register^ newtab = gcnew Register();
		newtab->Show();
	}
};
}

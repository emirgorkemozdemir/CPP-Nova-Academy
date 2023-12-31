#pragma once
#include "Login.h" 
namespace FormsCPPDBÖrnek {
    
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	


	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluşturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanılan tüm kaynakları temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegister;
	protected:

	private: System::Windows::Forms::TextBox^ tboxUsername;
	private: System::Windows::Forms::MaskedTextBox^ tboxPassword;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ btnGoToLogin;


	protected:

	private:
		/// <summary>
		///Gerekli tasarımcı değişkeni.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarımcı desteği için gerekli metot - bu metodun 
		///içeriğini kod düzenleyici ile değiştirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->tboxUsername = (gcnew System::Windows::Forms::TextBox());
			this->tboxPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->btnGoToLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnRegister
			// 
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->btnRegister->Location = System::Drawing::Point(340, 427);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(478, 71);
			this->btnRegister->TabIndex = 0;
			this->btnRegister->Text = L"Kayıt Ol";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &MyForm::btnRegister_Click);
			// 
			// tboxUsername
			// 
			this->tboxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxUsername->Location = System::Drawing::Point(340, 116);
			this->tboxUsername->Name = L"tboxUsername";
			this->tboxUsername->Size = System::Drawing::Size(478, 53);
			this->tboxUsername->TabIndex = 1;
			// 
			// tboxPassword
			// 
			this->tboxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->tboxPassword->Location = System::Drawing::Point(340, 245);
			this->tboxPassword->Name = L"tboxPassword";
			this->tboxPassword->PasswordChar = '*';
			this->tboxPassword->Size = System::Drawing::Size(478, 53);
			this->tboxPassword->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(533, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Şifre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(458, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Kullanıcı Adı ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->checkBox1->Location = System::Drawing::Point(861, 38);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(199, 50);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Özellik 2";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->checkBox2->Location = System::Drawing::Point(861, 116);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(199, 50);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Özellik 1";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(85, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(75, 24);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Erkek";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(85, 94);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 24);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Kadın";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// btnGoToLogin
			// 
			this->btnGoToLogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGoToLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->btnGoToLogin->Location = System::Drawing::Point(340, 525);
			this->btnGoToLogin->Name = L"btnGoToLogin";
			this->btnGoToLogin->Size = System::Drawing::Size(478, 71);
			this->btnGoToLogin->TabIndex = 9;
			this->btnGoToLogin->Text = L"Giriş Sayfası";
			this->btnGoToLogin->UseVisualStyleBackColor = true;
			this->btnGoToLogin->Click += gcnew System::EventHandler(this, &MyForm::btnGoToLogin_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1161, 719);
			this->Controls->Add(this->btnGoToLogin);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tboxPassword);
			this->Controls->Add(this->tboxUsername);
			this->Controls->Add(this->btnRegister);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {

		// Connection string, veritabanı ile bağlantı kodudur. Ancak text olarak tutarız.
		String^ connectionString = "Data Source=DESKTOP-RMDD7OL;Initial Catalog=ECommerceDB;Integrated Security=True;TrustServerCertificate=True";

		// Con fonksiyonu ile connectionstring çalıştırılır. bağlantı sağlanmaya çalışılır
		SqlConnection con(connectionString);

		// bağlantıyı açtık
		con.Open();

		// query yani sorgu, sqlde gördüğümüzün aynısı. o an ne yapmak istiyorsak ona göre query yazmamız lazım
		String^ query = "INSERT INTO TablePeople (PeopleUserName,PeoplePassword) values (@pusername,@ppassword)";
		SqlCommand cmd(query, % con);

		// command'e parametre ekledik
		cmd.Parameters->AddWithValue("@pusername", tboxUsername->Text);
		cmd.Parameters->AddWithValue("@ppassword", tboxPassword->Text);

		cmd.ExecuteNonQuery();

		con.Close();
		

	}
private: System::Void btnGoToLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	Login^ login = gcnew Login;
	login->ShowDialog();
}
};
};
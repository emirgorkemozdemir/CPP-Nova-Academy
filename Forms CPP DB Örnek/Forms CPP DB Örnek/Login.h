#pragma once




namespace FormsCPPDBÖrnek {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FormsCPPDBÖrnek;

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
	private: System::Windows::Forms::Button^ btnGoToRegister;
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
			this->btnGoToRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnGoToRegister
			// 
			this->btnGoToRegister->Location = System::Drawing::Point(229, 325);
			this->btnGoToRegister->Name = L"btnGoToRegister";
			this->btnGoToRegister->Size = System::Drawing::Size(212, 51);
			this->btnGoToRegister->TabIndex = 0;
			this->btnGoToRegister->Text = L"Kayıt Sayfasına Git";
			this->btnGoToRegister->UseVisualStyleBackColor = true;
			this->btnGoToRegister->Click += gcnew System::EventHandler(this, &Login::btnGoToRegister_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 465);
			this->Controls->Add(this->btnGoToRegister);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnGoToRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	};
}

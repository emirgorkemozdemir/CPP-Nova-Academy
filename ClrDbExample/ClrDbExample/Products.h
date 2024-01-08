#pragma once
#include "MyConnection.h"
#include "NavigatorClass.h"

namespace ClrDbExample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Products
	/// </summary>
	public ref class Products : public System::Windows::Forms::Form
	{
	public:
		Products(void)
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
		~Products()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dg;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->dg = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg))->BeginInit();
			this->SuspendLayout();
			// 
			// dg
			// 
			this->dg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg->Location = System::Drawing::Point(12, 12);
			this->dg->Name = L"dg";
			this->dg->RowHeadersWidth = 62;
			this->dg->RowTemplate->Height = 28;
			this->dg->Size = System::Drawing::Size(956, 311);
			this->dg->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 394);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Çıkış Yap";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Products::button1_Click);
			// 
			// Products
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 529);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dg);
			this->Name = L"Products";
			this->Text = L"Products";
			this->Load += gcnew System::EventHandler(this, &Products::Products_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Products_Load(System::Object^ sender, System::EventArgs^ e) {
		MyConnection::CheckConnection();

		SqlDataAdapter da("Select ProductTitle, ColorName as 'ProductColorName', ProductPrice,CategoryName as 'ProductCategoryName' ,ProductPoint,ProductPrice ,ProductSize, ProductImage from TableProduct inner join TableCategory on ProductCategory=CategoryID inner join TableColor on ProductColor=ColorID",MyConnection::connection);

		DataTable^ dt = gcnew DataTable();
		da.Fill(dt);

		dg->DataSource = dt;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		NavigatorClass::ToLogin();
	}
	};
}

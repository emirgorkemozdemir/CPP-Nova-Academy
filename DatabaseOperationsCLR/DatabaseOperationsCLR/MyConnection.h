#pragma once

using namespace System;
using namespace System::Data::SqlClient;

ref class MyConnection // Class içerisine özellik,metot veya nesneleri tanımladık
{
public:
	// Conneciton oluşturdum, direkt olarak bağlantı dizemi attım ve işlemi tamamladım.
	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-RMDD7OL;Initial Catalog=ECommerceDB;Integrated Security=True;TrustServerCertificate=True");
	void CheckConnection();

};


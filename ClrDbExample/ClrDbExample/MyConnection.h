#pragma once
using namespace System;
using namespace System::Data::SqlClient;

// MyConnection class'ını biz oluşturduk. Class oluşturmamızın amacı
// bağlantı nesnesini ortak bir yerde tutup, sürekli olarak kullanmak
// static class oluşturdum, çünkü içerideki her şey sabit. hiçbir zaman
// bağlantı kodumuz vs değişmeyecek 

static ref class MyConnection
{
public:
	 // connection nesnesi, veritabanı bağlantı nesnesi. SqlConnection classı zaten hazır class. Bunu yapmamızın sebebi, yazdığımız bağlantının artık çalıştırılabilir olması.
	 static SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-RMDD7OL;Initial Catalog=ECommerceDB;Integrated Security=True;TrustServerCertificate=True");
	
	 // Bu metotun ismini ben oluşturdum, istediğiniz gibi düzenleyebilirsiniz. Ancak aynı isimle cpp dosyanızda bunun içeriğini yazmanız gerekir.
	 static void CheckConnection();
};


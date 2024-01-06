#include "MyConnection.h"
using namespace System::Data;


void MyConnection::CheckConnection()
{
	// MyConnection isimli class'ın içerisine zaten
	// connection ögesini açmıştım. Yapmam gereken tek şey
	// MyConnection::connection diyerek çağırmak

	// Sonrasında if içerisinde, bağlantı kapalıysa dedim
	// Bağlantıyı açtık
	if (MyConnection::connection->State == ConnectionState::Closed)
	{
		MyConnection::connection->Open();
	}
}
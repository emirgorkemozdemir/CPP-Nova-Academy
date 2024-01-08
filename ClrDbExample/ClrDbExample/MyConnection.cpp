#include "MyConnection.h"
using namespace System::Data;

// Bu metotun amacı bağlantının açık veya kapalı oldugunu tespit etmek
void MyConnection::CheckConnection()
{
	// Eğer bağlantı kapalıysa açacak, açıksa hiçbir şey yapmayacak.
	if (MyConnection::connection->State==ConnectionState::Closed)
	{
		MyConnection::connection->Open();
	}
}

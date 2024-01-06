#pragma once

// Gerekli kütüphaneleri dahil ettim
// SHA işlemi girilen şifrenin şifrelenerek tutulmasını sağlar
#include <string>
#include <cliext/adapter>

using namespace System;
using namespace System::Security::Cryptography;

ref class HashSHA256
{
	// CompyteSHA256 isimli bir metot oluşturdum.
public:
	static String^ ComputeSHA256(String^ input);
};


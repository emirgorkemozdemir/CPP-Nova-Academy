#pragma once

using namespace System;
using namespace System::Security::Cryptography;
using namespace System::Text;
ref class sha1hash
{
public:
	static String^ sha1(String^ input);
};


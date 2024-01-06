#include "HashSHA256.h"
using namespace System::Text;

String^ HashSHA256::ComputeSHA256(String^ input)
{
    array<Byte>^ hashBytes;
    SHA256^ sha256 = SHA256Managed::Create();
    hashBytes = sha256->ComputeHash(Encoding::UTF8->GetBytes(input));

    StringBuilder^ sb = gcnew StringBuilder();
    for each (Byte b in hashBytes) {
        sb->Append(b.ToString("x2"));
    }

    return sb->ToString();
}

#include "sha1hash.h"

String^ sha1hash::sha1(String^ input)
{
    array<Byte>^ data = Encoding::UTF8->GetBytes(input);
    SHA1^ sha = gcnew SHA1CryptoServiceProvider();
    array<Byte>^ result = sha->ComputeHash(data);

    StringBuilder^ sb = gcnew StringBuilder();
    for each (Byte b in result) {
        sb->Append(b.ToString("x2")); // Convert each byte to its hexadecimal representation
    }
    return sb->ToString();
}

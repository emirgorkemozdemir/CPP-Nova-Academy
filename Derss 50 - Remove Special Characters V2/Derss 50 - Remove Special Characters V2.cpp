#include <iostream>
/*
Girilen cümle içerisinde, özel karakter veya karakterler
varsa o özel karakterleri sildiren uygulamayı yapınız.
Bu özelliği main içerisine direkt yazmayınız.
Fonksiyon olarak istiyorum :)
Yapan arkadaşlar wp'den yollayabilir.
Özel karakterler :  . , ! @ # $ % ^ & * ( )
Örnek :
removeSpecialCharacters("The quick brown fox!")
➞ "The quick brown fox"
*/

std::string RemoveSpecialCharacters(std::string sentence)
{
  


    // Yeni boş cümle açtım. özel karakter olmayanları ekleyeceğim
    std::string new_sentence = "";

    // cümlenin tüm karakterlerini özel karakter mi
    // değil mi diye kontrol etmem şart
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i]!= '.' && sentence[i] != ','&& sentence[i] != '!'&& sentence[i] != '@'&& sentence[i] != '#'&& sentence[i] != '$'&& sentence[i] != '%'&& sentence[i] != '^'&& sentence[i] != '&'&& sentence[i] != '*'&& sentence[i] != '('&& sentence[i] != ')'&& sentence[i] != '?')
        {
            new_sentence += sentence[i];
        }
     
    }
    return new_sentence;
}

int main()
{
    std::cout << RemoveSpecialCharacters("*****??????.... HELLO WORLD");
}

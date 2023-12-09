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
    // özel karakterleri bir dizide tuttum
    // dizinin türü char yani tek karakter
    char special_chars[] = { '.',',','!','@','#','$','%','^','&','*','(',')','?'};

    // Yeni boş cümle açtım. özel karakter olmayanları ekleyeceğim
    std::string new_sentence = "";

    // cümlenin tüm karakterlerini özel karakter mi
    // değil mi diye kontrol etmem şart
    for (int i = 0; i < sentence.length(); i++)
    {
        // ikinci foru da dizinin elemanları içinde
        // dolaşmak için yaptım
        // 0 dan başladım dizinin uzunluğuna kadar gittim
        int is_char_special = 0;
        for (int k = 0; k < sizeof(special_chars); k++)
        {
            if (sentence[i]==special_chars[k])
            {
                is_char_special++;
            }
        }

        if (is_char_special==0)
        {
            new_sentence += sentence[i];
        }
    }
    return new_sentence;
}

int main()
{
    std::cout<<RemoveSpecialCharacters("Hello !!!???*** World");
}

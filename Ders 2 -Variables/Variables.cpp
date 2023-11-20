#include <iostream>


int main()
{
    /* 
    Değişken oluştururken öncelikle değişkenin türü  belirlenir.
    Değişken oluşturulduğu anda değer atanmak zorunda değildir.
    Aynı türde değişkenler yan yana oluşturulabilir.
    Değişken oluştururken değişken ismi sayıyla başlayamaz
    Değişkenlerin ismi arasında _ işareti bulunabilir
    */ 

    // Integer tam sayıları tutan değişken türüdür
    int sayac = 15;

    // Önce sayacı yazdırdım daha sonrasında \n ile bir satır aşağı indim
    std::cout << sayac << "\n";

    // Double ondalıklı sayıları tutan değişken türüdür virgülden sonra 15 digit tutabilir
    double my_double = 5.5;
    std::cout << my_double;

    // Float ondalıklı sayıları tutan değişken türüdür
    float my_float = 5.5;
    std::cout << my_float;

    // Char tek karakter tutar
    char karakter = 'C';
    std::cout << karakter;
    
    // String uzun yazıları yani birden fazla karakteri tutar
    std::string text = "Hello World .......";
    std::cout << text;

    // Bool türü ikili sonuçları tutar
    bool isCppGood = false;
    std::cout << isCppGood;
}

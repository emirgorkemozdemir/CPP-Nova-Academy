#include <iostream>

int Square(int num)
{
    return num * num;
}

int Factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

void CheckPassword(std::string temp_pass)
{
    if (temp_pass.length()<8)
    {
        std::cout << "Şifre 8'den küçük olamaz";
    }
    else
    {
        std::cout << "Şifre doğru";
    }
}


// Girilen şifrenin uzunluğunu bulan ve şifre uzunluğu 8'den kısaysa hata mesajı döndüren bir uygulama yapınız
// Girilen sayının faktöriyelini döndüren fonksiyonu oluşturun.
// Girilen sayının karesini döndüren fonksiyonu oluşturun.
int main()
{
    /*int number;
    std::cout << "Bir sayı giriniz";
    std::cin >> number;

    int sonuc = Factorial(number);

    std::cout << sonuc;*/

    std::string pass;
    std::cout << "Şifre giriniz : ";
    std::cin >> pass;

    CheckPassword(pass);

}

#include <iostream>

int Square(int num)
{
    return num * num;
}

// Girilen sayının karesini döndüren fonksiyonu oluşturun.
int main()
{
    int number;
    std::cout << "Bir sayı giriniz";
    std::cin >> number;

    int result = Square(number);

    std::cout << result;
}

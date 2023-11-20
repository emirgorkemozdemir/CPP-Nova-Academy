#include <iostream>

int main()
{
    // While döngüsü kullanarak
    // kullanıcıdan sürekli sayı alan ve
    // negatif sayı aldığında duran uygulama

    int num;
    std::cout << "Bir sayı giriniz" << "\n";
    std::cin >> num;

    std::cout << "Girdiğiniz sayı : " << num << "\n";

    while (num > 0)
    {
        std::cout << "Bir sayı giriniz" << "\n";
        std::cin >> num;
        std::cout << "Girdiğiniz sayı : " << num << "\n";

    }
    
}

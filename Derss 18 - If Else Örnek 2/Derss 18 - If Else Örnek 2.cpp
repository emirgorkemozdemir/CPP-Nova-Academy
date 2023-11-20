#include <iostream>

int main()
{
    // Girilen sayının tek mi çift mi olduğunu bulup
    // tek ise küpünü , çift ise karesini ekrana yazdırın
    int num;
    std::cout << "Bir sayı giriniz: ";
    std::cin >> num;

    if (num % 2 == 0)
    {
        std::cout << num*num;
    }
    else
    {
        std::cout << num * num*num;
    }
}

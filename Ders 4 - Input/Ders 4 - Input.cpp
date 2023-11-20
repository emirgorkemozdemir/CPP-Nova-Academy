#include <iostream>

int main()
{
    // Input alabilmem için değişken oluşturmam şart
    int num1,num2;

    std::cout << "Birinci sayiyi giriniz :";
    //c in
    std::cin >> num1;

    std::cout << "İkinci sayiyi giriniz :";
    //c in
    std::cin >> num2;

    int toplam = num1 + num2;
    std::cout << toplam;
}

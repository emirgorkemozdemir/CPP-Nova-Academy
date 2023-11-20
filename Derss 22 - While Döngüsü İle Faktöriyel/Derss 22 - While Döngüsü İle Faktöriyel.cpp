#include <iostream>

int main()
{
    // Kullanıcı tarafından girilen sayının faktöriyelini bulunuz
    int i = 1;
    int limit;
    int result = 1;
    std::cout << "Bir sayı giriniz :";
    std::cin >> limit;

    while (i <= limit)
    {
        result *= i;
        ++i;
    }

    std::cout << result;
    
}

#include <iostream>

int main()
{
    /* While döngüsü belirli bir işlemi tekrar
    tekrar yapmak için kullanılır */
    
    // While kullanarak 1-10 arası tüm sayıları toplayın

    int i = 1;
    int toplam = 0;
    while (i <= 10)
    {
        toplam += i;
        ++i;
    }
    std::cout << toplam;
}
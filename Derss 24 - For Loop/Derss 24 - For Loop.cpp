#include <iostream>

int main()
{/*
    for (int i=1;i<10;++i)
    {

    }*/

    // For döngüsü kullanarak,1 ile 10
    // arasındaki tek sayıları çarpan uygulama
    int result = 1;
    for (int i = 1; i <= 10; i+=2)
    {
        result *= i;
    }
    std::cout << result;

}

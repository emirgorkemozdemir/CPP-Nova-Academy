#include <iostream>

int main()
{
    for (int i = 1; i <= 20; ++i)
    {
        // Döngüyü kırmak için break
        // Döngüden bir adım atlamak için continue
       
        if (i == 10)
        {
            continue;
        }
        std::cout << i<<"\n";
    }
}


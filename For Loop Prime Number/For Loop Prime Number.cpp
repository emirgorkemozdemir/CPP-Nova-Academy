#include <iostream>

int main()
{
   /* 1-50 arası tek asal sayıların
    kaç tane olduğunu bulan uygulama*/
    
    for (int i = 47; i <= 50; ++i) 
    {
        int counter = 0;
        for (int k=1;k<=i;++k)
        {
            if (i%k ==0)
            {
                ++counter;
            }
        }
        if (counter == 2)
        {
            std::cout << i << "\n";
        }
    }


}


#include <iostream>

void divideNum(int i, int j) {
    if (j == 0) { // eğer 0'a bölünmeye çalışılıyorsa throw yapacak
        throw "Division by zero!";
    }
    int result = i / j;
    std::cout << "Output: " << result << std::endl;
}

int main()
{
    try {
        // bu kod normalde hata verecektir. çünkü 10'u 0 a bölmeye çalışıyor
        divideNum(10, 0);
    }
    catch (...) { // ... kullanımı ile gelen tüm throwları alabilirsiniz
      
        std::cerr << "Unknown exception occurred" << std::endl;
    }
}

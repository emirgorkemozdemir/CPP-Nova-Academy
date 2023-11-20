#include <iostream>

int main()
{

    // Kullanıcı tarafından girilen uzunluğu kullanarak
    // karenin alan ve çevresini bulan uygulama yazınız.
    // Karenin bir kenarı kullanıcı tarafından girilecek.
    int kenar, alan, cevre;
    std::cout << "Karenin bir kenarını giriniz :";
    std::cin >> kenar;

    alan = kenar * kenar;
    cevre = 4 * kenar;

    std::cout << "Cevre :" << cevre;
    std::cout << "Alan :" << alan;
}
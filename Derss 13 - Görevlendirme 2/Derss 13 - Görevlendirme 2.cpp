#include <iostream>

int main()
{
    // Kullanıcı tarafından girilen vize ve final notlarını
    // vizenin yüzde 40'ını, finalin yüzde 60'ını alarak
    // ikisini toplayıp, tek bir değere dönüştüren uygulamayı yapınız
    int vize, final, sonuc;
    std::cout << "Vize notunuzu giriniz : ";
    std::cin >> vize;
    if(vize >= 0 && vize <= 100)
    {

    }
    else
    {
        std::cout << "Geçersiz sayı girdiniz";
        return 0;
    }

    std::cout << "Final notunuzu giriniz : ";
    std::cin >> final;

    if (final >= 0 && final<= 100)
    {

    }
    else
    {
        std::cout << "Geçersiz sayı girdiniz";
        return 0;
    }

    sonuc = (vize * 40) / 100 + (final * 60) / 100;

    std::cout << "Ortalama : " << sonuc;
}
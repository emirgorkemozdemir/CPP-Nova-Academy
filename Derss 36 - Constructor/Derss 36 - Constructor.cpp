#include <iostream>
/* Constructor özel bir fonksiyondur.
Bu özel fonksiyon ile, henüz nesne oluşurken
özellik atayabilirsiniz. Class ismi ile aynı 
isimde olmak zorunda*/
class Car {
public:
    std::string CarBrand;
    int CarYear;
    int CarKM;

    /* Constructor = nesne oluşurken çalışan fonksiyon
       Constructor fonksiyonunun adı class ile aynı olmak zorundadır.
    */ 
    Car(std::string TempBrand,int TempYear,int TempKM) 
    {
        CarBrand = TempBrand;
        CarYear = TempYear;
        CarKM = TempKM;
    }

    void CheckPoint() 
    {
        if (CarYear<=2023 && CarYear>=2010)
        {
            std::cout << "A";
        }
        else if (CarYear <= 2009 && CarYear >= 2000)
        {
            std::cout << "B";
        }
        else if (CarYear <= 1999 && CarYear >= 1989)
        {
            std::cout << "C";
        }
        else if (CarYear <= 1988 && CarYear >= 1978)
        {
            std::cout << "D";
        }
    }
};

/*
Girilen araç yılına göre
bu araca a ile d arasında puan veren metodu
yazınız. Yıl ne kadar büyükse çıkarsa 
puan o kadar yüksek olsun
*/
int main()
{
    Car car1("BMW",2001,250000);
    Car car2("Mercedes", 2023, 500000);


    car2.CheckPoint();
}


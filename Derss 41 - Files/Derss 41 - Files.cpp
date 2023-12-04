#include <iostream>
#include <fstream>#include <string>


int main()
{
    //// Dosya Oluşturmak
    //
    //// Open file stream ile dosyayı açtık, dosya bulunmuyorsa kendisi otomatik olarak bu isimde bir dosyayı oluşturur
    //std::ofstream MyFile("mytext.txt");

    //// dosyanın içerisine istediğimiz değeri yazabiliyoruz aşağıdaki şekilde
    //MyFile << "File Deneme";

    //// dosyayla işimiz bittikten sonra kapatmak zorundayız !!
    //MyFile.close();


    // Dosya Okumak

    // Okunan satırı atamak için string açtım
    std::string mystring;

    // ifstream oluşturarak mytexti açtık
    std::ifstream MyFile("mytext.txt");

    // Buradaki if kısmında mytext başarıyla açıldı mı diye kontrol ettik
    if (MyFile.is_open())
    {
        // Dosyamız okunur iken (while) durumunda olacakları belirledik
        while (MyFile)
        {
            // Okunan satırı mystring değişkenine atayıp ekrana yazdırdık
            // get ile beraber tüm satırları teker teker alabiliyoruz
            mystring = MyFile.get();
            std::cout << mystring;
        }
    }

    MyFile.close();
}

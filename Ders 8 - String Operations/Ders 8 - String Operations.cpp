#include <iostream>


int main()
{
    // Concat operation
    std::string name = "Emir";
    std::string surname = "Ozdemir";
    //std::cout << name +" "+ surname << "\n";

    // Append operation => stringin üzerine ekleme yapar
    //name.append(surname);
    
    // String length veya size kullanılabilir textin uzunluğu için
    //int uzunluk = name.length();
    //std::cout << uzunluk;

    /*
    Index kavramı = > sayma sayıları c++ 
    programlama dilinde 0'dan başlar. Yani
    biz bir string'in ilk harfini almak istediğimizde
    0. harfi seçmemiz gerekir.
    */

    //char firstLetter = name[0];
    //std::cout << firstLetter;

    /* Karakter sayısını bilmediğimiz bir
    kelimenin son harfini nasıl ekrana alırız */
    //int lastIndex = name.length()-1;
    //char lastLetter = name[lastIndex];
    //std::cout << lastLetter;

    /* Name değişkeninin ilk karakterini başka
    bir karakterle değiştirin */
    name[0] = 'Q';
    std::cout << name;
}

#include <iostream>

/*
arazi genişliği w
arazinin uzunluğu l
ağaçlar arasındaki boşluk g
Belirli bir arazinin kenarlarına dikilebilecek ağaç sayısını 
aşağıda gösterilen simetrik düzende döndürecek bir algoritma 
oluşturmanız gerekir (simetrik olmayan boşluk = x, ağaç =



*/

int PlantTrees(int width, int height, int gap) 
{
    int width_tree_count = (width / gap)+1;
    int height_tree_count = (height / gap)+1;

    int result = (width_tree_count * 2 + height_tree_count * 2) - 4;

    return result;
}
int main()
{
    std::cout << PlantTrees(5, 5, 1);
}

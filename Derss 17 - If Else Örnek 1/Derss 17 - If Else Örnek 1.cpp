// Derss 17 - If Else Örnek 1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
	//Kullanıcı tarafından girilen yaş değerine göre
 //kullanıcının ehliyet alıp alamayacağını ekrana yazdıran uygulama
 //ama if else kısmı tek satırda yazılacak

	int age;
	std::cout << "Yaşınızı giriniz : ";
	std::cin >> age;

	std::string my_message = (age >= 18) ? "Ehliyet alabilirsiniz" : "Ehliyet alamazsınız";
	std::cout << my_message;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin

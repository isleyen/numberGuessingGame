#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	// Rastgele sayı üretimi için kod:
	srand(std::time(0));

	// 1 ile 100 arasında rastgele bir sayı üret
	int hedefSayi = std::rand() % 100 + 1;
	// +1 ekleme nedeni sayıyı 0-100 arasında tutmak
	int tahmin;
	int denemeSayisi = 0;

	cout << "Lutfen 0-100 arasindaki sayiyi tahmin edin!" << endl;

	// Doğru tahmin dönene kadar 
	while (true) {
		cout << "Tahmininizi Giriniz: ";
		cin >> tahmin;
		denemeSayisi++;

		if (tahmin > hedefSayi)
			cout << "Daha kucuk bir sayi giriniz." << endl;
		else if (hedefSayi > tahmin)
			cout << "Daha buyuk bir sayi giriniz." << endl;
		else {
			cout << "Tebrikler dogru tahmin ettiniz!" << endl;
		cout << "Tahmin Sayisi: " << denemeSayisi << endl;
		break;
		}
	}
	return 0;
}
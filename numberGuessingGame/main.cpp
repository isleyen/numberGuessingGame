#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	// Rastgele say� �retimi i�in kod:
	srand(std::time(0));

	// 1 ile 100 aras�nda rastgele bir say� �ret
	int hedefSayi = std::rand() % 100 + 1;
	// +1 ekleme nedeni say�y� 0-100 aras�nda tutmak
	int tahmin;
	int denemeSayisi = 0;

	cout << "Lutfen 0-100 arasindaki sayiyi tahmin edin!" << endl;

	// Do�ru tahmin d�nene kadar 
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
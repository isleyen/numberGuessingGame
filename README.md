# Sayı Tahmin Oyunu

Bilgisayarın ürettiği random sayiyi, kullanıcının bulmaya çalıştığı eğlenceli bir oyun :)

Örneğin:

![image](https://github.com/isleyen/numberGuessingGame/assets/136992260/3cf60b83-fb84-43cc-8261-aa193064fed0)

## Hadi Kodları İnceleyelim!

![image](https://github.com/isleyen/numberGuessingGame/assets/136992260/a3fe8bbd-e0a1-47cf-a927-c11b3f62d0fa)

Rastgele sayilar üretmemi sağlayacak olan önemli iki kütüphaneyi tanımladık.

![image](https://github.com/isleyen/numberGuessingGame/assets/136992260/ae12059a-728c-47c9-983a-3795353ee1a9)

Random sayi üreten kod.

![image](https://github.com/isleyen/numberGuessingGame/assets/136992260/bb829dba-6f71-4c8b-a6f0-4a2cd4562354)

Random üretilen sayiyi 1-100 arasinda tutmamız için %100 modunu alıyoruz ve +1 ekliyoruz çünkü %100 modunu alınca değerimiz 0-99 arasında olur ve +1 eklersek 1-100 arasında gelir.

![image](https://github.com/isleyen/numberGuessingGame/assets/136992260/52973edc-7e80-40c1-8495-27298aadc784)

Kullanıcı Doğru değeri girene kadar döngüde kal ve kullanıcıya tahmin ettir.

> [!NOTE]
> Her while döngüsü döndükçe yani kullanıcı her tahminde bulundukça kaç kere tahmin ettiğini de saklayıp en sonda yazırıyoruz.

![image](https://github.com/isleyen/numberGuessingGame/assets/136992260/334219d4-bbec-4285-b1ab-0dee35288226)

Hedef Dosya: main.cpp

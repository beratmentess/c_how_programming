/*
 * Dizinin elemanlarına indeks kullanılarak erişilir. İndeksler 0’dan başlar
 * Dizinin boyutundan bir eksik olana kadar devam eder.
 */

// Elemanlara Erişim Sözdizimi >> dizi_adi[indeks];

//Örnek: Dizi Elemanlarını Yazdırma

#include <stdio.h>

int main() {
 int sayilar[5] = {10, 20, 30, 40, 50};

 for (int i = 0; i < 5; i++) {
  printf("sayilar[%d]: %d\n", i, sayilar[i]);
 }
 return 0;
}

/*
 * CIKTI
  * sayilar[0]: 10
  * sayilar[1]: 20
  * sayilar[2]: 30
  * sayilar[3]: 40
  * sayilar[4]: 50
 */

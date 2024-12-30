/*
 * Dizilerde belirli bir elemanı bulmak için arama algoritmaları kullanılır.
 * En temel algoritma, doğrusal arama (linear search) yöntemidir.
 */

// Doğrusal Arama >> Doğrusal arama, diziyi baştan sona dolaşarak elemanı arar

// Örnek: Dogrusal Arama
#include <stdio.h>

int ara(int dizi[], int boyut, int aranan) {
 for (int i = 0; i < boyut; i++) {
  if (dizi[i] == aranan) {
   return i; // Elemanın bulunduğu indeks
  }
 }
 return -1; // Eleman bulunamadı
}

int main() {
 int sayilar[5] = {10, 20, 30, 40, 50};
 int aranan = 30;

 int sonuc = ara(sayilar, 5, aranan);

 if (sonuc != -1) {
  printf("Eleman %d indeksinde bulundu.\n", sonuc);
 } else {
  printf("Eleman bulunamadi.\n");
 }

 return 0;
}



/*
 * CIKTI
  * Eleman 2 indeksinde bulundu.
 */



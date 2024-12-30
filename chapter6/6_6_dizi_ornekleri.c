/*
 *Mahir Berat Mentes
 */

/*
 * Diziler, birçok gerçek dünya problemini çözmek için kullanılabilir.
 * Aşağıda çeşitli uygulama örnekleri verilmiştir:
 */

//Örnek 1: Elemanların Toplamını Hesaplama

#include <stdio.h>

int main() {
 int sayilar[5] = {1, 2, 3, 4, 5};
 int toplam = 0;

 for (int i = 0; i < 5; i++) {
  toplam += sayilar[i];
 }

 printf("Toplam: %d\n", toplam);
 return 0;
}

/*
 * CIKTI
  * Toplam: 15
 */

//Örnek 2: En Büyük Elemanı Bulma



int main() {
 int sayilar[5] = {10, 20, 5, 15, 25};
 int max = sayilar[0];

 for (int i = 1; i < 5; i++) {
  if (sayilar[i] > max) {
   max = sayilar[i];
  }
 }

 printf("En Buyuk Eleman: %d\n", max);
 return 0;
}

/*
 * CIKTI
  * En Buyuk Eleman: 25
 */

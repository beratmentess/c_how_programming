/*
 * Diziler, genellikle artan veya azalan sıraya göre sıralanır.
 * En yaygın sıralama algoritmalarından biri seçme sıralama (selection sort) yöntemidir.
 *
 * Seçme Sıralama Algoritması
 * 1-En küçük elemanı bulun.
 * 2-İlk elemanla yer değiştirin.
 * 3-Kalan elemanlar için aynı işlemi tekrar edin.
 */

//Örnek: Secme Sıralama

#include <stdio.h>

void sirala(int dizi[], int boyut) {
 for (int i = 0; i < boyut - 1; i++) {
  int minIndeks = i;

  for (int j = i + 1; j < boyut; j++) {
   if (dizi[j] < dizi[minIndeks]) {
    minIndeks = j;
   }
  }

  // Yer değiştir
  int temp = dizi[i];
  dizi[i] = dizi[minIndeks];
  dizi[minIndeks] = temp;
 }
}

int main() {
 int sayilar[5] = {20, 5, 15, 10, 25};

 sirala(sayilar, 5);

 printf("Siralanmis Dizi:\n");
 for (int i = 0; i < 5; i++) {
  printf("%d ", sayilar[i]);
 }

 return 0;
}


/*
 * CIKTI
  * Siralanmis Dizi:
  * 5 10 15 20 25
 */



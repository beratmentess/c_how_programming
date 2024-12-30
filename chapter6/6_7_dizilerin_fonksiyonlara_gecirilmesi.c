/*
 * C dilinde bir dizi, bir fonksiyona geçirildiğinde,
 *dizinin bir kopyası değil, dizinin adresi gönderilir.
 * Bu nedenle, fonksiyon içinde yapılan değişiklikler orijinal diziye yansır.
 */

/*
 * DIZIYI FONKSIYONA GECIRME
 * Bir diziyi fonksiyona geçirmek için, dizi adı ve boyutunu belirtmek gerekir.
 *
 * >> void yazdir(int dizi[], int boyut);
 */

//Örnek: Dizi Elemanlarını Yazdırma

#include <stdio.h>

void yazdir(int dizi[], int boyut) {
 for (int i = 0; i < boyut; i++) {
  printf("dizi[%d]: %d\n", i, dizi[i]);
 }
}

int main() {
 int sayilar[5] = {1, 2, 3, 4, 5};
 yazdir(sayilar, 5);
 return 0;
}


/*
 * CIKTI
  * dizi[0]: 1
  * dizi[1]: 2
  * dizi[2]: 3
  * dizi[3]: 4
  * dizi[4]: 5
 */

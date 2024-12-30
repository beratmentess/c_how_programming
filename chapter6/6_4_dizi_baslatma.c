/*
 * Bir dizi, tanımlandığı sırada başlatılabilir.
 * Bu işlem, başlangıç değerlerini belirtmek için küme parantezleri {} kullanılarak yapılır.
 */

#include <stdio.h>

int main() {
    int sayilar[5] = {1, 2, 3, 4, 5}; // Başlatılmış dizi

    for (int i = 0; i < 5; i++) {
        printf("sayilar[%d]: %d\n", i, sayilar[i]);
    }
    return 0;
}

/*
 * CIKTI
    * sayilar[0]: 1
    * sayilar[1]: 2
    * sayilar[2]: 3
    * sayilar[3]: 4
    * sayilar[4]: 5
 */

//KISMI BASLATMA >> Eğer bir dizi eksik elemanlarla başlatılırsa, eksik elemanlar 0 olarak atanır.

int sayilar[5] = {1, 2}; // Geri kalan elemanlar sıfır

//Bu durumda, sayilar dizisinin elemanları: {1, 2, 0, 0, 0} olacaktır.

/*
 * BASLATMA YAPILMADAN KULLANIM
 * Başlatma yapılmadan kullanılan bir dizi, rastgele değerler içerir
 * Bu durum programın beklenmedik şekilde davranmasına neden olabilir.
 */

//HATALI KULLANIM

int sayilar[5];
printf("Ilk eleman: %d\n", sayilar[0]); // Rastgele bir değer

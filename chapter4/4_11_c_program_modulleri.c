/*
 *Mahir Berat Mentes
 */

/*
 *C dilinde büyük programlar genellikle modüler bir yapıda organize edilir. 
 *Bu, programın küçük, yönetilebilir ve yeniden kullanılabilir parçalara bölünmesi anlamına gelir.
 *Her modül belirli bir görevi yerine getirir ve diğer modüllerle işbirliği yapar.
 */

/*
 * Modüler Programlamanın Avantajları
 * 1-Okunabilirlik: Program daha düzenli ve anlaşılır hale gelir.
 * 2-Yeniden Kullanılabilirlik: Bir modül, başka bir projede tekrar kullanılabilir.
 * 3-Hata Ayıklama: Hatalar daha kolay izlenir ve çözülür.
 * 4-İşbirliği: Büyük projelerde birden fazla kişi aynı anda çalışabilir.
 */

/*
 *Modüler Programlama Örneği
 *Bir program üç ayrı dosyaya bölünebilir:
 *
 *Başlık Dosyası (.h) >> Ortak tanımlamalar ve prototipleri içerir.
 *
 *Kaynak Dosyası (.c) >> Fonksiyon tanımlamalarını içerir.
 *
 *Ana Program (main.c) >> Programın giriş noktasıdır.
 */

//Örnek: Modüler Yapı

//Başlık Dosyası: matematik.h

#ifndef MATEMATIK_H
#define MATEMATIK_H

int toplama(int a, int b);
int carpma(int a, int b);

#endif

//Kaynak Dosyası: matematik.c

#include "matematik.h"

int toplama(int a, int b) {
    return a + b;
}

int carpma(int a, int b) {
    return a * b;
}

//Ana Program: main.c

#include <stdio.h>
#include "matematik.h"

int main() {
    int a = 5, b = 3;

    printf("Toplam: %d\n", toplama(a, b));
    printf("Carpim: %d\n", carpma(a, b));

    return 0;
}

/*
 * Derleme ve Çalıştırma
  * 1-Dosyaları derlemek:
    * bash >> gcc main.c matematik.c -o program
  * 2-Programı çalıştırmak:
    * ./program
 */

/*
 *CIKTI
  *Toplam: 8
  *Carpim: 15
 */



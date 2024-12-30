/*
 *Mahir Berat Mentes
 */

/*
 *Bir dizi, sabit bir boyuta sahip veri elemanlarının sıralı bir koleksiyonudur.
 *Diziler C programlama dilinde aşağıdaki özelliklere sahiptir:
 *
 *Tek Veri Türü:
 *Bir dizi yalnızca bir veri türündeki elemanları saklayabilir (örneğin, int, float, char).
 *
 *Sabit Boyut:
 *Dizi tanımlandığında boyutu sabitlenir ve değiştirilemez.
 *
 *İndeksleme:
 *Dizideki elemanlara 0'dan başlayan bir indeksle erişilir.
 *
 *
 *Diziye Erişim
 *Dizinin ilk elemanı: dizi[0]
 *Dizinin ikinci elemanı: dizi[1]
 *Son eleman: dizi[boyut - 1]
 */

// Örnek: Dizi Tanımı ve Kullanımı

#include <stdio.h>

int main() {
    int dizi[5] = {10, 20, 30, 40, 50}; // Bir dizi tanımla

    printf("Birinci eleman: %d\n", dizi[0]); // İlk eleman
    printf("Ucuncu eleman: %d\n", dizi[2]); // Üçüncü eleman
    return 0;
}

/*
 *CIKTI
 *Birinci eleman: 10
 *Ucuncu eleman: 30
 */

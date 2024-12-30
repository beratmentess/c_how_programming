/*
 * Mahir Berat Mentes
 */

/*
 *C programlama dilinde, cast operatörü bir değişkenin veya ifadenin veri türünü bir başka tür olarak yorumlamak için kullanılır.
 *Bu işlem, özellikle farklı veri türleri arasında dönüşüm gerektiğinde kullanışlıdır.
 *Cast operatörü parantez içinde yazılarak uygulanır ve aşağıdaki biçime sahiptir:
 *
 * (tür) ifade
 *
 */

/* Temel Kullanım
 * Cast operatörü, bir ifadenin veri türünü geçici olarak değiştirir. Bu işlem, özellikle tür dönüşümünün sonuçları üzerinde daha fazla kontrol sağlamak için kullanılır.
 */

// Örnek:

#include <stdio.h>

int main() {
    int tamSayi = 5;
    int tamSayi2 = 2;
    float sonuc = (float) tamSayi / tamSayi2; // Tam sayıları ondalıklı türe dönüştür

    printf("Sonuc: %.2f\n", sonuc);
    return 0;
}

/*
 *CIKTI
  * Sonuc: 2.50
 */

/*
 * ACIKLAMA
 * (float) operatörü, tamSayi değişkenini geçici olarak float türüne dönüştürür.
 * Böylece tam sayı bölmesinin kesirli kısmı kaybolmaz.
 */

/*
 *Zorunlu Tür Dönüşümü
 *Cast operatörü, zorunlu tür dönüşümü yapar. Bu, programcı tarafından açıkça belirtilir ve işlem sırasında veri kaybına neden olabilir.
 */

//Örnek:

#include <stdio.h>

int main() {
    double deger = 9.99;
    int tamSayi = (int) deger; // Kesirli kısmı at

    printf("Tam Sayi: %d\n", tamSayi);
    return 0;
}

/*
 *CIKTI
  * Tam Sayi: 9
 */

/*
 *ACIKLAMA
 *(int) dönüşümü, deger değişkeninin ondalık kısmını atar ve yalnızca tam kısmı korur.
 */

/*
 *Tür Dönüşümünün Kullanım Alanları
  * 1-Matematiksel İşlemler:
  * Tür dönüşümü, farklı veri türlerine sahip ifadeler üzerinde doğru işlemler yapmak için kullanılır.
 */


//Örnek:

int a = 7, b = 2;
float sonuc = (float) a / b; // Kesirli bölme için tür dönüşümü
printf("Sonuc: %.2f\n", sonuc);

/*
 *CIKTI
  * Sonuc: 3.50
 */

/*
 * 2-Bellek ve Veri Yönetimi:
 *Bir veri türünü başka bir türe dönüştürerek bellek yönetimi sağlanabilir.
 */

//Örnek:

int sayi = 65;
char karakter = (char) sayi; // Tam sayıyı karaktere dönüştür
printf("Karakter: %c\n", karakter);

/*
 *CIKTI
  * Karakter: A
 */


/* 3-Pointer Türü Dönüşümü:
 * Tür dönüşümü, bellek adresleriyle çalışırken farklı pointer türleri arasında geçiş yapmak için kullanılabilir.
 */

//Örnek:

#include <stdio.h>

int main() {
    int sayi = 100;
    void *ptr = &sayi; // Türsüz pointer
    printf("Deger: %d\n", *(int *)ptr); // Tür dönüşümü yaparak veri yazdır
    return 0;
}

/*
 *CIKTI
  * Deger: 100
 */


/*
 *Zorunlu Tür Dönüşümünün Riskleri
 *Zorunlu tür dönüşümleri sırasında veri kaybı veya beklenmeyen sonuçlar oluşabilir.
 */

//Örnek:

#include <stdio.h>

int main() {
    double deger = 300.75;
    char kucukDeger = (char) deger; // Veri kaybı riski
    printf("Sonuc: %d\n", kucukDeger);
    return 0;
}

/*
 * CIKTI
  * Sonuc: 44
 */

/*
 *ACIKLAMA
 *double türünden char türüne dönüşüm sırasında veri kaybı meydana gelir.
 */


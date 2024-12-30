/*
 *Mahir Berat Mentes
 */


/*
 *Bir for döngüsü, belirli bir aralıktaki sayıların toplamını hesaplamak gibi işlemler için mükemmel bir araçtır.
 *Bu tür işlemler, sayaç kontrollü bir yapıyı doğal olarak takip ettiği için, for döngüsü bu durumda oldukça uygun bir seçimdir.
 */

//Toplam Hesaplama: Temel Örnek >> Bu örnek, 1'den 100'e kadar olan sayıların toplamını hesaplar.

#include <stdio.h>

int main() {
    int toplam = 0;

    for (int i = 1; i <= 100; i++) {
        toplam += i; // Toplama, her adımda i'yi ekle
    }

    printf("1'den 100'e kadar olan sayilarin toplami: %d\n", toplam);
    return 0;
}

/*
 *CIKTI
  *1'den 100'e kadar olan sayilarin toplami: 5050
 */

/*
 * Açıklama:
 * Döngü 1'den başlar ve 100'e kadar çalışır.
 * Her adımda i değişkeninin değeri toplam değişkenine eklenir.
 * Döngü tamamlandığında toplam, 1'den 100'e kadar olan sayıların toplamını içerir.
 */

// Çift Sayıların Toplamı >> Bir for döngüsü kullanarak 1 ile 100 arasındaki çift sayıların toplamını hesaplayabiliriz.

#include <stdio.h>

int main() {
    int toplam = 0;

    for (int i = 2; i <= 100; i += 2) { // Yalnızca çift sayılar için adımı 2 artır
        toplam += i;
    }

    printf("1 ile 100 arasindaki cift sayilarin toplami: %d\n", toplam);
    return 0;
}

/*
 *CIKTI
  *1 ile 100 arasindaki cift sayilarin toplami: 2550
 */

// Kullanıcıdan Giriş Alarak Toplama
// Bu örnek, kullanıcıdan belirli bir sayı aralığı isteyerek o aralıktaki sayıların toplamını hesaplar.


#include <stdio.h>

int main() {
    int baslangic, bitis, toplam = 0;

    printf("Baslangic degerini girin: ");
    scanf("%d", &baslangic);

    printf("Bitis degerini girin: ");
    scanf("%d", &bitis);

    for (int i = baslangic; i <= bitis; i++) {
        toplam += i;
    }

    printf("%d ile %d arasindaki sayilarin toplami: %d\n", baslangic, bitis, toplam);
    return 0;
}


/*
 * CIKTI
  * Baslangic degerini girin: 5
  * Bitis degerini girin: 10
  * 5 ile 10 arasindaki sayilarin toplami: 45
*/

/*
 *Açıklama:
 *Kullanıcıdan başlangıç ve bitiş değerleri alınır.
 *Döngü, bu aralıktaki tüm sayıları toplar.
 */


// Bir Dizi Elemanlarının Toplamını Hesaplama >>Bu örnek, bir dizideki elemanların toplamını hesaplar.

#include <stdio.h>

int main() {
    int dizi[] = {10, 20, 30, 40, 50};
    int toplam = 0;
    int boyut = sizeof(dizi) / sizeof(dizi[0]); // Dizinin boyutunu hesapla

    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }

    printf("Dizideki elemanlarin toplami: %d\n", toplam);
    return 0;
}

/*
 *CIKTI
  * Dizideki elemanlarin toplami: 150
 */

/*
 *Açıklama:
 *Döngü, dizinin her elemanını toplar.
 *sizeof operatörü, dizinin boyutunu hesaplamak için kullanılır.
 */

//Sonsuz Toplama Döngüsü (Kontrolle) >> Bu örnek, kullanıcıdan sürekli olarak giriş alır ve "0" girildiğinde toplamı hesaplar.

#include <stdio.h>

int main() {
    int sayi, toplam = 0;

    printf("Sayilari girin (bitirmek icin 0 girin):\n");
    for (;;) { // Sonsuz döngü
        scanf("%d", &sayi);
        if (sayi == 0) { // Çıkış koşulu
            break;
        }
        toplam += sayi;
    }

    printf("Girilen sayilarin toplami: %d\n", toplam);
    return 0;
}

/*
 *CIKTI
  *Sayilari girin (bitirmek icin 0 girin):
  *5
  *10
  *15
  *0
  *Girilen sayilarin toplami: 30
*/

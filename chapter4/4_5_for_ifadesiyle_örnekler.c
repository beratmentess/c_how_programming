/*
 *Mahir Berat Mentes
 */

/*
 *Bu bölümde, for döngüsünün çeşitli durumlarda nasıl kullanılacağını göstermek için örnekler sunulmaktadır. 
 *Bu örnekler, for döngüsünün esnekliğini ve farklı programlama görevlerinde nasıl uygulanabileceğini anlamanıza yardımcı olacaktır.
 */

// Örnek 1: Aritmetik Diziyi Yazdırma >> Bu program, bir aritmetik dizi oluşturur ve her elemanını ekrana yazdırır.

#include <stdio.h>

int main() {
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i * 2); // Her adımda 2 ile çarp
    }
    return 0;
}

/*
 *CIKTI
  * 0
  * 2
  * 4
  * 6
  * 8
  * 10
  * 12
  * 14
  * 16
  * 18
  * 20
  */

/*
 *Açıklama: Döngü, 0'dan 10'a kadar olan değerleri işler ve her birini 2 ile çarparak yazdırır.
 */

//Örnek 2: Faktöriyel Hesaplama >> Bu program, bir sayının faktöriyelini hesaplar.

#include <stdio.h>

int main() {
    int sayi = 5; // Faktöriyeli hesaplanacak sayı
    int faktoriyel = 1;

    for (int i = 1; i <= sayi; i++) {
        faktoriyel *= i; // Her adımda faktöriyeli güncelle
    }

    printf("%d! = %d\n", sayi, faktoriyel);
    return 0;
}

/*
 *CIKTI
  * 5! = 120
 */

//Açıklama: Döngü, 1'den sayi değişkenine kadar olan her değeri faktöriyele çarpar.

//Örnek 3: Ters Sıralama >> Bu program, 10'dan 1'e kadar olan sayıları ters sırada yazdırır.

#include <stdio.h>

int main() {
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}

/*
 * CIKTI
  * 10
  * 9
  * 8
  * 7
  * 6
  * 5
  * 4
  * 3
  * 2
  * 1
*/

// Açıklama: Döngü, 10'dan başlar ve her adımda i değişkenini bir azaltır.

//Örnek 4: Çarpım Tablosu >> Bu program, çarpım tablosunu oluşturur.

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Her tabloyu ayırmak için bir satır boşluk ekle
    }
    return 0;
}

/*
 * CIKTI
  * 1 x 1 = 1
  * 1 x 2 = 2
  * ...
  * 1 x 10 = 10
  * 
  * 2 x 1 = 2
  * 2 x 2 = 4
  * ...
  * 2 x 10 = 20
*/

// Açıklama: İç içe for döngüsü kullanılarak 1'den 10'a kadar tüm çarpım tablosu oluşturulur.

// Örnek 5: Bir Sayının Basamaklarının Toplamını Hesaplama >>Bu program, verilen bir sayının basamaklarının toplamını hesaplar.

#include <stdio.h>

int main() {
    int sayi = 12345;
    int toplam = 0;

    for (; sayi != 0; sayi /= 10) {
        toplam += sayi % 10; // Son basamağı toplama ekle
    }

    printf("Basamaklarin toplami: %d\n", toplam);
    return 0;
}

/*
 *CIKTI
  *Basamaklarin toplami: 15
 */

// Açıklama: Döngü, sayi değişkenini 10'a bölerek her seferinde bir basamağı işler ve toplamı günceller.




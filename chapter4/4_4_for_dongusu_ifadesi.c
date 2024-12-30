/*
 *Mahir Berat Mentes
 */

/*
 *for döngüsü, sayaç kontrollü döngülerin en yaygın kullanılan türlerinden biridir. 
 *Bir işlemin belirli bir sayıda tekrar edilmesi gerektiğinde kullanılır.
 *for döngüsü, başlangıç, koşul ve güncelleme ifadelerini tek bir satırda belirtebileceğiniz yapı sağlar.
 */

//for Döngüsünün Genel Yapısı

for (başlangıç; koşul; güncelleme) {
    // Döngü gövdesi
}
/*
 *Başlangıç: Döngü değişkeni (sayaç) burada başlatılır. Bu ifade, döngü başlamadan önce yalnızca bir kez çalıştırılır.
 *Koşul: Döngünün çalışmaya devam edip etmeyeceğini belirleyen mantıksal bir ifadedir. Koşul doğru olduğu sürece döngü devam eder.
 *Güncelleme: Her yinelemeden sonra döngü değişkeninin nasıl değişeceğini belirler.
 */

//for Döngüsü Örnekleri

//1. Basit Bir Örnek: 1'den 5'e Kadar Sayıları Yazdırma

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}


/*
 *Başlangıç: int i = 1 → Sayaç i 1 olarak başlatılır.
 *Koşul: i <= 5 → Döngü bu koşul doğru olduğu sürece çalışır.
 *Güncelleme: i++ → Her yinelemeden sonra i bir artırılır.
 */


/*
 *CIKTI
  * 1
  * 2
  * 3
  * 4
  * 5
 */


//2. Sayıların Toplamını Hesaplama

#include <stdio.h>

int main() {
    int toplam = 0;

    for (int i = 1; i <= 10; i++) {
        toplam += i; // Her döngüde toplamı güncelle
    }

    printf("1'den 10'a kadar olan sayilarin toplami: %d\n", toplam);
    return 0;
}

/*
 *CIKTI
  *1'den 10'a kadar olan sayilarin toplami: 55
 */


/*
 *Döngü İçinde Gömülü İfadeler
 *for döngüsü içinde diğer ifadeler veya kontrol yapıları kullanılabilir.
 */

//Örnek: Çift Sayıları Yazdırma

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}

/*
 *CIKTI
  * 2
  * 4
  * 6
  * 8
  * 10
 */


/*
 *for Döngüsünde Sonsuz Döngüler
 *Eğer koşul hiçbir zaman yanlış olmazsa, for döngüsü sonsuza kadar çalışır.
 */

//Örnek:

for (;;) {
    printf("Bu bir sonsuz döngüdür.\n");
}

/*
 * Not: Burada koşul belirtilmediği için döngü sonsuzdur. 
 * Bu tür döngüler, genellikle döngüden manuel çıkış yapılacak durumlarda kullanılır.
 */

/*
 *for Döngüsünün Avantajları
 *Kompakt Yapı: Başlangıç, koşul ve güncelleme ifadelerini tek bir satırda tanımlama imkanı sağlar.
 *Okunabilirlik: Döngü sayacıyla ilgili tüm bilgiler döngü başlığında yer alır, bu da kodun okunabilirliğini artırır.
 *Esneklik: Döngü yapısı, geniş bir kullanım yelpazesine uygundur.
 */


/*
 * for döngüsü, sayaç kontrollü işlemleri düzenli ve temiz bir şekilde gerçekleştirmek için ideal bir araçtır. 
 * Basit bir yapı sunarken, aynı zamanda karmaşık işlemleri yönetme esnekliği sağlar. 
 * Koşul ve sayaç değerlerini doğru tanımlamak, döngülerin verimli çalışmasını sağlar.
 */

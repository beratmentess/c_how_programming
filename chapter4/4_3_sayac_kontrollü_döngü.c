/*
 *Mahir Berat Mentes
 */

/*
 * Sayaç kontrollü döngüler, belirli sayıda yineleme yapmak için kullanılır.
 * Bu tür döngülerde bir sayaç değişkeni kullanılır.
 * Döngünün başlatılması, sonlandırılması ve güncellenmesi kontrol edilir.
 * Bu, belirli bir başlangıç ve bitiş noktası olan işlemler için idealdir.
 */

/*
 * Sayaç Kontrollü Döngünün Bileşenleri
 * 1-Başlangıç Değeri: Sayaç değişkenine başlangıç değeri atanır.
 * 2-Koşul: Döngünün çalışmaya devam edip etmeyeceğini belirler.
  * Eğer koşul doğru (true) ise döngü çalışmaya devam eder; aksi takdirde döngü sonlanır.
 * 3-Güncelleme: Her yinelemede sayaç değişkeninin değerini artırır veya azaltır.
 */

/*
 * C'de Sayaç Kontrollü Döngü Kullanımı
 * C programlama dilinde sayaç kontrollü döngüler genellikle for döngüsü ile uygulanır.
 */

//Örnek: 1'den 10'a kadar olan sayıları yazdıran bir program:

#include <stdio.h>

int main() {
 for (int i = 1; i <= 10; i++) {
  printf("%d\n", i);
 }
 return 0;
}

/*
 *ACIKLAMA
 * 1- int i = 1; → Sayaç i değişkeni başlatılır ve 1 olarak ayarlanır.
 * 2- i <= 10; → Döngü bu koşul doğru olduğu sürece çalışır.
 * 3- i++ → Her yinelemede i bir artırılır.
 */

/*
 * CIKTI
  * 1
  * 2
  * 3
  * 4
  * 5
  * 6
  * 7
  * 8
  * 9
  * 10
 */

/*
 * Sayaç Kontrollü Döngüyle Toplama İşlemi
 * Bir dizi sayı toplamak için sayaç kontrollü döngü kullanabilirsiniz.
 */

//Örnek: 1'den 10'a kadar olan sayıların toplamını hesaplayan bir program:


int main() {
 int toplam = 0;

 for (int i = 1; i <= 10; i++) {
  toplam += i; // Her adımda toplamı güncelle
 }

 printf("1'den 10'a kadar olan sayilarin toplami: %d\n", toplam);
 return 0;
}

/*
 * CIKTI
  * 1'den 10'a kadar olan sayilarin toplami: 55
 */

/*
 * Sonsuz Döngü Riski
 * Sayaç doğru bir şekilde güncellenmezse, döngü sonsuz bir döngüye dönüşebilir.
 * Bu, kaynak tüketimine ve programın çökmesine neden olabilir.
 */

// Hatalı Örnek:

for (int i = 1; i <= 10; i++) { // Güncelleme doğru
 printf("%d\n", i);
}

/*
 * Sayaç kontrollü döngüler, belirli bir başlangıç ve bitiş noktası olan işlemler için etkili ve güvenilir bir yöntemdir.
 * for döngüsü, bu tür işlemleri uygulamak için C dilinde en yaygın kullanılan yapıdır.
 * Sayaçların doğru şekilde başlatılması, koşulların doğru tanımlanması ve güncellemelerin düzgün yapılması önemlidir.
 */

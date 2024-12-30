/*
 *Mahir Berat Mentes
 */

/*
 *Bir döngü, belirli bir koşul doğru olduğu sürece bir dizi işlemi tekrar tekrar gerçekleştiren bir programlama yapısıdır. 
 *Döngüler, programların tekrarlayan işlemleri etkin bir şekilde gerçekleştirmesini sağlar. 
 *Döngülerde üç temel bileşen bulunur:
 *
 *Başlangıç (Initialization): Döngü değişkenine (sayaç) bir başlangıç değeri atanır.
 *Koşul (Condition):Döngünün çalışmaya devam edip etmeyeceğini belirleyen bir ifade. 
  *Bu ifade her yinelemeden önce değerlendirilir. 
  *Eğer doğru (true) ise döngü çalışır, yanlış (false) ise döngü sonlanır.
 *Güncelleme (Update): Döngü değişkeninin değerini değiştiren bir işlem. 
  *Bu, genellikle döngü değişkenini artırma veya azaltma şeklinde olur.
 */

//Döngü Türleri >> C programlama dilinde, üç temel döngü türü vardır:
/*
 * 1-WHİLE DÖNGÜSÜ:
  *Koşul doğru olduğu sürece döngü çalışır.
  *Döngüye girmeden önce koşul değerlendirilir.
 */

// Örnek

#include <stdio.h>
int i = 1;
while (i <= 5) {
    printf("%d\n", i);
    i++;
}

/*
 * 2- FOR DÖNGÜSÜ:
  *Sayaç kontrollü döngüler için kullanılır. 
  *Başlangıç, koşul ve güncelleme tek bir ifadede belirtilir.
*/

// Örnek

for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}

/*
 * 3- do...while döngüsü:
  *Koşul doğru olduğu sürece çalışır ancak diğer döngülerden farklı olarak, 
   *döngü gövdesi koşuldan önce en az bir kez çalıştırılır.
*/

//Örnek

int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 5);

/*
 *Döngülerin Genel Kullanım Alanları
 *Listeleme: Belirli bir aralıktaki sayıları listelemek.
 *Toplama: Bir dizi elemanın toplamını hesaplamak.
 *Arama: Bir dizi içinde belirli bir elemanı bulmak.
 *Sıralama: Elemanları sıralamak için kullanılır.
 */

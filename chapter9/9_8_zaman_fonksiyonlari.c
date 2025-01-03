/*
 *Mahir Berat Mentes
 */

/*
 *C dilinde <time.h> başlık dosyası, zamanla ilgili işlemler için kullanılır.
 *Bu, tarih ve saat bilgilerini almak veya süre ölçmek için kullanılır. 
 */

//Önemli Zaman Fonksiyonları

/*
 *  Fonksiyon	          Açıklama	                                          Örnek Kullanım
 *  time(NULL)	        Şu anki zamanı alır (epoch süresinde)	              time(NULL) → 1638457200
 *  clock()	            Programın çalıştığı süreyi ölçer	                  clock() → 1000
 *  difftime(t1, t2)	  İki zaman arasındaki farkı hesaplar	                difftime(t1, t2) → 5.0
 *  localtime()	        Şu anki zamanı yerel saat formatında döndürür	      localtime(&t)
 */

//Örnek: Mevcut Zamanı Almak

"""
  #include <stdio.h>
#include <time.h>
int main() {
    time_t simdi = time(NULL);
    printf("Simdiki zaman: %s", ctime(&simdi));
    return 0;
}

"""
  /*
   *CIKTI
     *Simdiki zaman: Thu Dec 2 15:15:20 2024
   */

  

/*
 *Mahir Berat Mentes
 */

/*  
 *Rastgele sayılar, simülasyonlar, oyunlar ve test verileri oluşturmak için kullanılır.
 *C dilinde rastgele sayı üretimi için rand() ve srand() fonksiyonları kullanılır. 
 */

// Önemli Rastgele Sayı Fonksiyonları

/*
 *   Fonksiyon	        Açıklama	                                                    Örnek Kullanım
 *   rand()	            0 ile RAND_MAX arasında bir rastgele sayı üretir	            rand() → 1804289383
 *   srand(seed)	      Rastgele sayı üretici için bir başlangıç noktası belirler	    srand(time(0));
 */

//Örnek: Rastgele Sayılar Üretme

"""
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Tohum belirle
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }
    return 0;
}

"""

  /*
   *CIKTI
     *135792468
     *123456789
     *246801357
     *...
   */

  //Belirli Aralıkta Rastgele Sayılar

  """
  
  int rastgele = min + (rand() % (max - min + 1));
  
  """
  

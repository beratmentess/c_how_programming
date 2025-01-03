/*
 *Mahir Berat Mentes
 */

/*
 *Metin dönüşüm fonksiyonları, metinleri sayılara veya sayıları metinlere dönüştürmek için kullanılır. 
 *Bu fonksiyonlar genellikle <stdlib.h> başlık dosyasında tanımlanır.
 */

//Önemli Metin Dönüşüm Fonksiyonları

/*
 *    Fonksiyon	    Açıklama	                          Örnek
 *    atoi	        Metni tam sayıya dönüştürür	        atoi("123") → 123
 *    atof	        Metni ondalıklı sayıya dönüştürür	  atof("3.14") → 3.14
 *    itoa	        Tam sayıyı metne dönüştürür	        itoa(123, buffer, 10);
 *    sprintf	      Formatlı metin oluşturur	          sprintf(buffer, "%d", sayi);
 */


//Örnek: Metni Tam Sayıya Dönüştürme

"""
  #include <stdio.h>
#include <stdlib.h>

int main() {
    char metin[] = "12345";
    int sayi = atoi(metin); // Metni tam sayıya dönüştür

    printf("Metin: %s, Tam Sayi: %d\n", metin, sayi);
    return 0;
}

"""

  /*
   *CIKTI
    *Metin: 12345, Tam Sayi: 12345
   */


  //Örnek: Tam Sayıyı Metne Dönüştürme

  """

  #include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi = 6789;
    char metin[10];
    sprintf(metin, "%d", sayi); // Tam sayıyı metne dönüştür

    printf("Tam Sayi: %d, Metin: %s\n", sayi, metin);
    return 0;
}

"""

  /*
   *CIKTI
    *Tam Sayi: 6789, Metin: 6789
   */

  
  

/*
 *C dilinde, karakter dizileriyle çalışmak için birçok standart fonksiyon sunulmuştur. 
 *Bu fonksiyonlar, <string.h> başlık dosyasında bulunur.
 */

/*
 * Yaygın Metin İşleme Fonksiyonları
 *  Fonksiyon	        Açıklama	                                        Örnek Kullanım
 *  strlen(s)	        Metnin uzunluğunu döndürür	                      strlen("Merhaba") → 7
 *  strcpy(d, s)	    Bir metni başka bir metne kopyalar	              strcpy(d, "Metin")
 *  strcat(d, s)	    İki metni birleştirir	                            strcat(d, " Dünya")
 *  strcmp(s1, s2)	  İki metni karşılaştırır (eşit mi kontrol eder)	  strcmp("A", "B") → -1
*/

// Örnek: Metin Uzunluğu

#include <stdio.h>
#include <string.h>

int main() {
    char metin[] = "Merhaba";
    printf("Metnin uzunlugu: %lu\n", strlen(metin));
    return 0;
}

/*
 * CIKTI
   * Metnin uzunlugu: 7
 */

// Örnek: Metin Birleştirme

int main() {
    char metin1[20] = "Merhaba";
    char metin2[] = " Dunya";

    strcat(metin1, metin2); // metin2'yi metin1'e ekle
    printf("%s\n", metin1);
    return 0;
}

/*
 *CIKTI
  * Merhaba Dunya
 */

//C dilinde metinler, bir dizi karakterle temsil edilir. Bir karakter dizisi, sonunda bir null karakter ('\0') ile sonlandırılmıştır.

// >> char metin[] = "Merhaba";
/*
 * ACIKLAMA
 * metin dizisi, 'M', 'e', 'r', 'h', 'a', 'b', 'a', '\0' karakterlerinden oluşur.
 */

// Metin Yazdırma

#include <stdio.h>

int main() {
    char mesaj[] = "Merhaba, Dunya!";
    printf("%s\n", mesaj); // %s ile metni yazdır
    return 0;
}

/*
 *CIKTI
   * Merhaba, Dunya!
 */

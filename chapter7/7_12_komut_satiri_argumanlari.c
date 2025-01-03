/*
 *Mahir Berat Mentes
 */

/*
 *C programları, komut satırından argüman alabilir.
 *Bu, programın dışarıdan bilgi almasını sağlar. 
 *Komut satırı argümanları, main fonksiyonunda argc ve argv parametreleriyle işlenir.
 */

"""
  int main(int argc, char *argv[]) {
    // argc: Argüman sayısı
    // argv: Argümanların adreslerini içeren bir dizi
}

"""

  // argc (argument count): Argümanların sayısını belirtir.
  // argv (argument vector): Argümanları tutan bir pointer dizisidir.


  """
  #include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Arguman sayisi: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Arguman %d: %s\n", i, argv[i]);
    }

    return 0;
}
"""
// KOMUT SATIRI >> ./program Merhaba Dünya

/*
 *CIKTI
  *Arguman sayisi: 3
  *Arguman 0: ./program
  *Arguman 1: Merhaba
  *Arguman 2: Dünya
 */


  //Komut Satırı Argümanlarını Kullanarak İşlemler Yapma

  """
  #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Lutfen iki sayi girin!\n");
        return 1;
    }

    int sayi1 = atoi(argv[1]); // İlk argümanı tam sayıya çevir
    int sayi2 = atoi(argv[2]); // İkinci argümanı tam sayıya çevir

    printf("Toplam: %d\n", sayi1 + sayi2);
    return 0;
}

"""
  // KOMUT SATIRI >> ./program 5 7

  /*
   *CIKTI
    *Toplam: 12
   */

/*
 *Mahir Berat Mentes
 */

/*
 *Bellek tahsis fonksiyonları, programın çalışma zamanında bellek alanı ayırmasını ve yönetmesini sağlar. 
 *Bu fonksiyonlar <stdlib.h> başlık dosyasında tanımlıdır.
 */

//Önemli Bellek Tahsis Fonksiyonları

/*
 *  Fonksiyon	      Açıklama                                              	Örnek
 *  malloc	        Belirtilen boyutta bellek ayırır	                      ptr = malloc(100);
 *  calloc	        Sıfırlanmış bellek alanı ayırır	                        ptr = calloc(10, sizeof(int));
 *  realloc	        Daha önce ayrılmış belleği yeniden boyutlandırır	      ptr = realloc(ptr, 200);
 *  free	          Ayrılmış belleği serbest bırakır	                      free(ptr);
 */

//Örnek: malloc Kullanımı

"""

  #include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(5 * sizeof(int)); // 5 tam sayı için bellek ayır

    if (ptr == NULL) {
        printf("Bellek ayrilamadi.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1; // Belleği doldur
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Belleği serbest bırak
    return 0;
}


/*
 *CIKTI
  * 1 2 3 4 5 
 */


//Örnek: calloc Kullanımı

"""

  #include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = calloc(5, sizeof(int)); // 5 sıfırlanmış tam sayı için bellek ayır

    if (ptr == NULL) {
        printf("Bellek ayrilamadi.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Varsayılan değerler sıfırdır
    }

    free(ptr); // Belleği serbest bırak
    return 0;
}

"""
 /*
  *CIKTI
   * 0 0 0 0 0
  */

  

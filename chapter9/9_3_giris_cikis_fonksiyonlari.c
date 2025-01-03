/*
 *Mahir Berat Mentes
 */

/*
 *Giriş/çıkış (I/O) işlemleri, kullanıcıdan veri almak ve çıktıyı göstermek için kullanılır. 
 *Bu işlemler genellikle <stdio.h> başlık dosyası altında sağlanır.
 */

//Önemli Giriş/Çıkış Fonksiyonları

/*Fonksiyon	   Açıklama	                                           Örnek
 *printf	     Formatlı çıktı yazdırır	                           printf("Merhaba!");
 *scanf        Formatlı giriş alır	                               scanf("%d", &sayi);
 *gets	       Bir satır metin alır                                gets(metin);
 *fgets	       Güvenli metin girişi için kullanılır	               fgets(metin, 50, stdin);
 *putchar	     Tek bir karakter yazdırır	                         putchar('A');
 *getchar	     Tek bir karakter okur	                             char c = getchar();
 */

//Örnek: Kullanıcıdan Veri Alma ve Yazdırma
"""
#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi); // Kullanıcıdan tam sayı al
    printf("Girdiginiz sayi: %d\n", sayi);
    return 0;
}
/*
 *Çıktı:
 *Bir sayi girin: 42
 *Girdiginiz sayi: 42
 */

/*
 * Mahir Berat Mentes
 */


/*
 *C dilinde printf fonksiyonu, kullanıcıya bilgi sunmak için en yaygın kullanılan fonksiyonlardan biridir.
 *printf, format belirteçleri kullanarak çıktıyı biçimlendirme esnekliği sağlar.
 *Bu bölümde, printf fonksiyonunun temel özelliklerini ve format belirteçlerini inceleyeceğiz.
 */

 // Temel Kullanım: printf'in temel sözdizimi şu şekildedir:


printf("format string", argümanlar);
//"format string": Yazdırılacak metni ve yer tutucuları içerir.
//argümanlar: Yer tutucuların yerine yazdırılacak değerlerdir.

//Örnek:

#include <stdio.h>

int main() {
    printf("Merhaba, Dünya!\n"); // Sadece bir metin yazdırır
    return 0;
}

/*
 * CIKTI
  * Merhaba, Dünya!
 */

/*
 * Format Belirteçleri
 * printf, verilerin türüne bağlı olarak farklı format belirteçleri kullanır. Aşağıdaki tablo, yaygın olarak kullanılan format belirteçlerini gösterir:
 */

/*
 * Belirteç	Veri Türü	    Açıklama
 * %d	    int	            Tam sayı
 * %f	    float	        Ondalıklı sayı
 * %c	    char	        Tek bir karakter
 * %s	    char*	        Karakter dizisi (string)
 * %lf	    double	        Çift hassasiyetli ondalık
 * %x	    unsigned int	Hexadecimal (16 tabanında)
 * %o	    unsigned int	Octal (8 tabanında)
 * %%	    Hiçbir şey	    Yüzde işareti yazdırır
 */

//Örnek:

#include <stdio.h>

int main() {
    int yas = 25;
    float boy = 1.75;
    char cinsiyet = 'E';

    printf("Yas: %d, Boy: %.2f, Cinsiyet: %c\n", yas, boy, cinsiyet);
    return 0;
}
/*
 *CIKTI
  *Yas: 25, Boy: 1.75, Cinsiyet: E
 */

/*
 *Ondalık Hassasiyeti Belirleme
 *Ondalıklı sayıların kaç basamak yazdırılacağını kontrol etmek için format belirteçlerinde .x kullanılır.
 */

//Örnek:

#include <stdio.h>

int main() {
    float pi = 3.1415926535;

    printf("Pi (2 basamak): %.2f\n", pi);
    printf("Pi (4 basamak): %.4f\n", pi);
    return 0;
}

/*
 *CIKTI
  *Pi (2 basamak): 3.14
  *Pi (4 basamak): 3.1416
 */


/*  Hizalama ve Genişlik Belirleme
 *  printf, çıktıyı hizalamak ve belirli bir genişlikte yazdırmak için ek formatlama seçenekleri sunar:
 * %w.p:
 * w: Toplam genişlik.
 * p: Ondalık basamak sayısı.
 */



//Örnek:

#include <stdio.h>

int main() {
    printf("|%10d|\n", 123);   // Sağ hizalı, toplam 10 karakter genişliğinde
    printf("|%-10d|\n", 123);  // Sol hizalı, toplam 10 karakter genişliğinde
    return 0;
}
/*
 *CIKTI
  * |       123|
  * |123       |
 */


/*
 * Özel Karakterler
 *Format string içinde aşağıdaki kaçış dizileri kullanılarak özel karakterler yazdırılabilir:
 */

/*
 * Kaçış Dizisi	    Anlamı
 *     \n	        Yeni satır
 *     \t	        Sekme (tab)
 *     \\	        Ters eğik çizgi
 *     \"	        Çift tırnak
 */

//Örnek:

#include <stdio.h>

int main() {
    printf("Bu bir yeni satırdır\nve bu da sekmedir:\tMerhaba!\n");
    return 0;
}

/*
 *CIKTI
  * Bu bir yeni satırdır
  * ve bu da sekmedir:   Merhaba!
 */

/*
 *Çoklu Argümanlar
 *printf, birden fazla argümanı destekler. Her argüman, sırasıyla ilgili yer tutucuya atanır.
 */

//Örnek:

#include <stdio.h>

int main() {
    printf("Ad: %s, Yas: %d, Maas: %.2f\n", "Ali", 30, 4500.75);
    return 0;
}

/*
 *CIKTI
  * Ad: Ali, Yas: 30, Maas: 4500.75
 */





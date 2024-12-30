/*
 * Mahir Berat Mentes
 */

/*C programlama dilinde tam sayı bölme, iki tam sayının bölünmesi durumunda kesirli kısmın atıldığı bir işlemdir.
 *Bu, kesme (truncation) olarak adlandırılır ve bölme işleminin yalnızca tam sayı kısmını döndürür.
 */

/*Tam Sayı Bölme
 *Tam sayı bölme, / operatörü kullanılarak yapılır.
 *Eğer hem bölen (divisor) hem de bölünen (dividend) tam sayıysa, sonuç da bir tam sayı olur ve kesirli kısmı atılır.
 */

 //Örnek:

#include <stdio.h>

int main() {
    int a = 7, b = 3;
    int sonuc = a / b;

    printf("7 / 3 = %d\n", sonuc);
    return 0;
}

/*
 * CIKTI
  * 7 / 3 = 2
 */

/* ACIKLAMA:
 * 7 / 3 işlemi, tam sayı olarak yalnızca tam kısmı (2) döndürür.
 * Kesirli kısım (0.333...) atılır.
 * Kesirli Sonuç için Gerçek Sayılar Kullanımı
 * Kesirli sonuç istiyorsanız, en az bir operatörün float veya double türünde olması gerekir.
 */


//Örnek:

#include <stdio.h>

int main() {
    float a = 7.0, b = 3.0;
    float sonuc = a / b;

    printf("7.0 / 3.0 = %.2f\n", sonuc);
    return 0;
}

/*
 * CIKTI
  * 7.0 / 3.0 = 2.33
 */



/*
 * ACIKLAMA:
 * float türü kullanılarak tam sayı kesme işlemi önlenir ve kesirli sonuç döndürülür.
 * Kesirli Kısım için Modulus (Mod Alma) Operatörü
 * C dilinde % (modulus) operatörü, bölme işleminin kalanını hesaplar.
 * Bu, tam sayı bölme işleminden sonra kalan değeri bulmak için kullanılır.
 */

// Örnek:

#include <stdio.h>

int main() {
    int a = 7, b = 3;
    int kalan = a % b;

    printf("7 %% 3 = %d\n", kalan);
    return 0;
}
/*
 * CIKTI
  * 7 % 3 = 1
 */

/*
 * ACIKLAMA:
 * 7 % 3 işlemi, 7yi 3e böler ve kalan değerini (1) döndürür.
 * Tam Sayı Bölmenin Kullanım Alanları
 * Rakamları Ayrıştırma: Tam sayı bölme ve mod işlemi, bir sayının rakamlarını ayrıştırmak için kullanılır.
 */

//Örnek:

#include <stdio.h>

int main() {
    int sayi = 12345;

    while (sayi > 0) {
        int rakam = sayi % 10; // Son rakamı al
        printf("%d\n", rakam);
        sayi /= 10; // Son rakamı kaldır
    }

    return 0;
}
/*
 *CIKTI
  *5
  *4
  *3
  *2
  *1
 */

// Çoklu Değerlerin Hesaplanması: Tam sayı bölme, saat, dakika ve saniye gibi süre hesaplamalarında kullanışlıdır. Örnek:

#include <stdio.h>

int main() {
    int toplamSaniye = 3671;

    int saat = toplamSaniye / 3600;
    int dakika = (toplamSaniye % 3600) / 60;
    int saniye = toplamSaniye % 60;

    printf("%d saat, %d dakika, %d saniye\n", saat, dakika, saniye);
    return 0;
}

/*
 *CIKTI
  * 1 saat, 1 dakika, 11 saniye
 */

/*
 * ACIKLAMA
  * Toplam saniye, önce 3600'e bölünerek saat bulunur.
  * Kalan saniyelerden dakika ve saniyeler hesaplanır.
 */

/* Tam Sayı Bölmede Dikkat Edilmesi Gerekenler
 * Sıfıra Bölme:
 * Bir tam sayıyı sıfıra bölmeye çalışmak, çalıştırma hatasına neden olur.
 */


int a = 5, b = 0;
int sonuc = a / b; // Hata: Sıfıra bölme

/* 
 * Veri Tipleri:
 * Eğer bir işlemde veri türleri karışık kullanılıyorsa, sonuç farklı olabilir.
 */

int a = 7;
float b = 3;
printf("%.2f\n", a / b); // Otomatik tür dönüştürme yapılır.

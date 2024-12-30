/*
 *Mahir Berat Mentes
 */

/*
 *C dilinde <math.h> başlık dosyası, matematiksel işlemleri gerçekleştirmek için çeşitli fonksiyonlar sağlar.
 *Bu fonksiyonlar, trigonometrik, logaritmik ve diğer matematiksel hesaplamaları içerir.
 */

/*
 * Önemli Matematik Fonksiyonları
 * 
 * Fonksiyon	    Açıklama	                                  Örnek Kullanım
 * sqrt(x)	      x'in karekökünü hesaplar	                  sqrt(25) → 5.0
 * pow(x, y)	    x üzeri y hesaplar	                        pow(2, 3) → 8.0
 * sin(x)	        x açısının sinüs değerini hesaplar	        sin(3.14 / 2) → 1.0
 * cos(x)        	x açısının kosinüs değerini hesaplar	      cos(0) → 1.0
 * log(x)	        x'in doğal logaritmasını hesaplar	          log(2.718) → 1.0
 * fabs(x)	      x'in mutlak değerini alır	                  fabs(-4.5) → 4.5
 * ceil(x)	      x'i yukarı yuvarlar	                        ceil(4.2) → 5.0
 * floor(x)	      x'i aşağı yuvarlar	                        floor(4.8) → 4.0
 */

//Örnek: Matematik Fonksiyonlarını Kullanma

#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0, y = 2.0;

    printf("Karekok: %.2f\n", sqrt(x));
    printf("2 üzeri 3: %.2f\n", pow(2, 3));
    printf("Sinus(90 derece): %.2f\n", sin(3.14 / 2));
    printf("Mutlak Deger: %.2f\n", fabs(-15.5));

    return 0;
}

/*
 * CIKTI
  * Karekok: 3.00
  * 2 üzeri 3: 8.00
  * Sinus(90 derece): 1.00
  * Mutlak Deger:15.50
 */











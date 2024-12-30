/*
 *Mahir Berat Mentes
 */

/*
 *Bileşik faiz, bir yatırımın veya borcun zamanla nasıl büyüdüğünü gösteren finansal bir kavramdır. 
 *Bu örnek, bir for döngüsü kullanarak yıllık bileşik faizi hesaplayan bir programın nasıl yazılacağını göstermektedir. 
 */


/*
 * Bileşik Faiz Formülü >> Bileşik faiz şu formülle hesaplanır: A = P(1+r)^n
   * A: Yatırımın gelecekteki değeri
   * P: Başlangıç yatırımı (ana para)
   * r: Faiz oranı (yıllık)
   * n: Faiz dönemi sayısı (yıl)
 */

// C Programı ile Bileşik Faiz Hesaplama >> Bu program, başlangıç yatırımını ve faiz oranını alarak her yıl için bileşik faizi hesaplar.

#include <stdio.h>
#include <math.h> // Matematik işlemleri için gerekli

int main() {
    double anaPara = 1000.0; // Başlangıç yatırımı
    double faizOrani = 0.05; // Yıllık faiz oranı (%5)

    printf("Yil\tGelecekteki Deger\n");

    for (int yil = 1; yil <= 10; yil++) {
        double gelecektekiDeger = anaPara * pow(1.0 + faizOrani, yil);
        printf("%d\t%.2f\n", yil, gelecektekiDeger);
    }

    return 0;
}

/*
 *Açıklama:
 *anaPara başlangıç yatırımını temsil eder.
 *faizOrani %5 olarak belirlenmiştir (0.05).
 *pow fonksiyonu, (1 + r)^n ifadesini hesaplamak için kullanılır.
 *Döngü, her yılın sonunda yatırımın gelecekteki değerini hesaplar ve yazdırır.
 */


/*
 * CIKTI
  * Yil     Gelecekteki Deger
  * 1       1050.00
  * 2       1102.50
  * 3       1157.63
  * 4       1215.51
  * 5       1276.28
  * 6       1340.10
  * 7       1407.10
  * 8       1477.46
  * 9       1551.33
  * 10      1628.89
*/

/*
 * Farklı Faiz Oranları için Hesaplama
  * Program, farklı faiz oranlarını ve yılları hesaplamak için kolayca genişletilebilir. 
  * Aşağıdaki örnek, %5, %6 ve %7 faiz oranları için hesaplama yapar:
 */

#include <stdio.h>
#include <math.h>

int main() {
    double anaPara = 1000.0;

    printf("Faiz Orani\t1. Yil\t2. Yil\t3. Yil\n");

    for (double faizOrani = 0.05; faizOrani <= 0.07; faizOrani += 0.01) {
        printf("%.2f%%\t", faizOrani * 100);

        for (int yil = 1; yil <= 3; yil++) {
            double gelecektekiDeger = anaPara * pow(1.0 + faizOrani, yil);
            printf("%.2f\t", gelecektekiDeger);
        }

        printf("\n");
    }

    return 0;
}


/*
 * CIKTI
  * Faiz Orani      1. Yil    2. Yil    3. Yil
  * 5.00%           1050.00   1102.50   1157.63
  * 6.00%           1060.00   1123.60   1191.02
  * 7.00%           1070.00   1144.90   1225.04
*/


/*
 *Mahir Berat Mentes
 */

/*
 *C dilinde matematiksel işlemleri gerçekleştirmek için <math.h> başlık dosyasında bir dizi fonksiyon bulunur. 
 *Bu fonksiyonlar, trigonometrik, logaritmik ve diğer temel matematiksel işlemleri sağlar.
 */

//Önemli Matematik Fonksiyonları

/*
 *  Fonksiyon	      Açıklama	                            Örnek Kullanım
 *  sqrt(x)	        x'in karekökünü alır	                sqrt(16) → 4.0
 *  pow(x, y)	      x üzeri y değerini hesaplar          	pow(2, 3) → 8.0
 *  sin(x)	        x açısının sinüsünü hesaplar	        sin(3.14 / 2) → 1.0
 *  cos(x)	        x açısının kosinüsünü hesaplar      	cos(0) → 1.0
 *  log(x)	        x'in doğal logaritmasını alır        	log(2.718) → 1.0
 *  fabs(x)	        x'in mutlak değerini alır            	fabs(-5.5) → 5.5
 *  ceil(x)        	x'i yukarı yuvarlar	                  ceil(4.2) → 5.0
 *  floor(x)      	x'i aşağı yuvarlar	                  floor(4.7) → 4.0
 */

//Örnek: Matematik Fonksiyonlarını Kullanma

"""
  #include <stdio.h>
#include <math.h>
int main() {
    double x = 9.0;
    printf("Karekok: %.2f\n", sqrt(x));
    printf("2 üzeri 3: %.2f\n", pow(2, 3));
    printf("Sinus(0): %.2f\n", sin(0));
    return 0;
}

"""
  /*
   *CIKTI
    *Karekok: 3.00
    *2 üzeri 3: 8.00
    *Sinus(0): 0.00
   */ 
  
 

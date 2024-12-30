/*
 *Mahir Berat Mentes
 */

//Bu vaka çalışmasında, bir sınıfın notlarını saklamak ve ortalamasını hesaplamak için bir dizi kullanıyoruz.


// Örnek: Sınıf Ortalaması Hesaplama

#include <stdio.h>

int main() {
 int notlar[5] = {85, 90, 78, 92, 88}; // Öğrenci notları
 int toplam = 0;

 for (int i = 0; i < 5; i++) {
  toplam += notlar[i]; // Tüm notları topla
 }

 double ortalama = toplam / 5.0; // Ortalama hesapla
 printf("Sinif ortalamasi: %.2f\n", ortalama);

 return 0;
}



/*
 * CIKTI
  * Sinif ortalamasi: 86.60
 */

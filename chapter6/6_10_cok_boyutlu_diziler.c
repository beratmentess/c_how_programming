/*
 *Mahir Berat Mentes
 */

/*
 * Bir çok boyutlu dizi, bir dizinin dizisi olarak düşünülebilir.
 * En yaygın kullanılan çok boyutlu dizi türü, iki boyutlu dizilerdir (tablolar).
 */

/*
 * IKI BOYUTL DIZI TANIMLAMA
 * Bir iki boyutlu diziyi şu şekilde tanımlayabilirsiniz:
 * >> tür dizi_adi[satir_sayisi][sutun_sayisi];
 */

// Örnek: İki Boyutlu Dizi Tanımı ve Kullanımı

#include <stdio.h>

int main() {
 int tablo[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2x3 boyutunda bir tablo

 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
   printf("tablo[%d][%d] = %d\n", i, j, tablo[i][j]);
  }
 }

 return 0;
}


/*
 * CIKTI
  * tablo[0][0] = 1
  * tablo[0][1] = 2
  * tablo[0][2] = 3
  * tablo[1][0] = 4
  * tablo[1][1] = 5
  * tablo[1][2] = 6
 */

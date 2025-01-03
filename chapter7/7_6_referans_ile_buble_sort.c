/*
 *Mahir Berat Mentes
 */

/*
 *Bubble Sort, diziyi artan veya azalan sıraya göre sıralamak için kullanılan basit bir sıralama algoritmasıdır. 
 *Pointer kullanarak bu işlemi verimli hale getirebiliriz.
 */

/*
 *Bubble Sort Algoritması
 *Her geçişte, komşu elemanlar karşılaştırılır.
 *Eğer elemanlar sıralı değilse, yer değiştirir.
 *Bu işlem, tüm elemanlar sıralanana kadar tekrarlanır.
 */
"""
  #include <stdio.h>

void bubbleSort(int *dizi, int boyut) {
    for (int i = 0; i < boyut - 1; i++) {
        for (int j = 0; j < boyut - i - 1; j++) {
            if (*(dizi + j) > *(dizi + j + 1)) {
                // Elemanları yer değiştir
                int temp = *(dizi + j);
                *(dizi + j) = *(dizi + j + 1);
                *(dizi + j + 1) = temp;
            }
        }
    }
}

int main() {
    int dizi[5] = {64, 34, 25, 12, 22};
    int boyut = 5;

    bubbleSort(dizi, boyut);

    printf("Siralanmis dizi:\n");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

"""

  /*
   *CIKTI
     *Siralanmis dizi:
     *12 22 25 34 64
   */

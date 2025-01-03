/*
 *Mahir Berat Mentes
 */

//Bu örnek, yapıların ve numaralandırmaların bir işlem işleme programında nasıl kullanılacağını gösterir. Program, bir müşteri hesap tablosunu işler.

"""
#include <stdio.h>

#define MAX_HESAP 100

typedef struct {
    int hesapNo;
    char isim[50];
    double bakiye;
} Hesap;

void bakiyeYazdir(const Hesap hesaplar[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("Hesap No: %d, Isim: %s, Bakiye: %.2f\n",
               hesaplar[i].hesapNo, hesaplar[i].isim, hesaplar[i].bakiye);
    }
}

void paraYatir(Hesap *hesap, double miktar) {
    hesap->bakiye += miktar;
}

void paraCek(Hesap *hesap, double miktar) {
    if (hesap->bakiye >= miktar) {
        hesap->bakiye -= miktar;
    } else {
        printf("Yetersiz bakiye!\n");
    }
}

int main() {
    Hesap hesaplar[MAX_HESAP] = {
        {101, "Ali", 500.0},
        {102, "Ayse", 1500.0},
        {103, "Fatma", 200.0}
    };

    int boyut = 3;

    printf("Baslangic Durumu:\n");
    bakiyeYazdir(hesaplar, boyut);

    printf("\nAli'ye 200 TL yatiriliyor...\n");
    paraYatir(&hesaplar[0], 200.0);

    printf("\nFatma 300 TL cekmeye calisiyor...\n");
    paraCek(&hesaplar[2], 300.0);

    printf("\nGuncel Durum:\n");
    bakiyeYazdir(hesaplar, boyut);

    return 0;
}

"""


  /*
   *CIKTI
     *Baslangic Durumu:
     *Hesap No: 101, Isim: Ali, Bakiye: 500.00
     *Hesap No: 102, Isim: Ayse, Bakiye: 1500.00
     *Hesap No: 103, Isim: Fatma, Bakiye: 200.00
     *
     *Ali'ye 200 TL yatiriliyor...
     *
     *Fatma 300 TL cekmeye calisiyor...
     *Yetersiz bakiye!
     *
     *Guncel Durum:
     *Hesap No: 101, Isim: Ali, Bakiye: 700.00
     *Hesap No: 102, Isim: Ayse, Bakiye: 1500.00
     *Hesap No: 103, Isim: Fatma, Bakiye: 200.00
  */

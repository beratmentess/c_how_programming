/*
 *Mahir Berat Mentes
 */

//Bu örnek, bir desteyi karıştırıp kartları dağıtmak için rastgele sayı fonksiyonlarının ve dizilerin nasıl kullanılacağını gösterir.

//Kod: Kart Karıştırma ve Dağıtma

"""

  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void karistir(int desteler[]);
void dagit(const int desteler[]);

int main() {
    int desteler[52];
    for (int i = 0; i < 52; i++) {
        desteler[i] = i;
    }

    srand(time(0));
    karistir(desteler);
    dagit(desteler);

    return 0;
}

void karistir(int desteler[]) {
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;
        int temp = desteler[i];
        desteler[i] = desteler[j];
        desteler[j] = temp;
    }
}
void dagit(const int desteler[]) {
    const char *takim[] = {"Kupa", "Karo", "Sinek", "Maça"};
    const char *kart[] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Vale", "Kız", "Papaz"};

    for (int i = 0; i < 52; i++) {
        printf("%s %s\n", takim[desteler[i] / 13], kart[desteler[i] % 13]);
    }
}


"""
/*
 *CIKTI(ORNEK)
   *Kupa As
   *Karo 3
   *Maça Papaz
   *...
 */
  


  

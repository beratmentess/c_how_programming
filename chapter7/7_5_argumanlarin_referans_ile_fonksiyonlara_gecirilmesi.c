/*
 *Mahir Berat Mentes
 */



/*
 *C dilinde argümanlar genellikle değer kopyalama (pass by value) yöntemiyle fonksiyonlara geçirilir.
 *Ancak, referans ile geçirme (pass by reference) pointer’lar kullanılarak yapılabilir. 
 *Bu yöntem, fonksiyon içinde yapılan değişikliklerin orijinal değişkene yansımasını sağlar.
 */

 /*
  *Referans ile Argüman Geçirme
  *Bir değişkenin adresini pointer olarak fonksiyona geçirin.
  *Fonksiyon içinde bu adresi kullanarak orijinal değişken üzerinde işlem yapabilirsiniz.
  */
"""""
  #include <stdio.h>

void degerDegistir(int *ptr) {
    *ptr = 20; // Pointer'ın işaret ettiği değeri değiştir
}

int main() {
    int sayi = 10;
    printf("Fonksiyondan Once: %d\n", sayi);

    degerDegistir(&sayi); // 'sayi'nin adresini geç
    printf("Fonksiyondan Sonra: %d\n", sayi);

    return 0;
}
"""""

  /*
   *CIKTI
    *Fonksiyondan Once: 10
    *Fonksiyondan Sonra: 20
   */

/*
  *Avantajları
    *Verimlilik:Büyük veri yapıları yerine yalnızca adresler aktarılır, böylece bellekten tasarruf edilir.
    *Değişikliklerin Yansıması:Fonksiyon içinde yapılan değişiklikler orijinal değişkene yansır.
  */
  



#include <stdio.h>

int main() {
    //1
    int a;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);

    if (a >= 0) {
        printf("Nilai a positif\n");
    } else {
        printf("Nilai a negatif\n");
    }

    //2
    int bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    printf("Bilangan yang diinputkan adalah %d.\n", bilangan);

    if (bilangan % 2 == 0) {
        printf("Bilangan tersebut adalah bilangan genap.\n");
    } else {
        printf("Bilangan tersebut adalah bilangan ganjil.\n");
    }

    //3
    float total_pembelian;
    float potongan_harga = 0.0;

    printf("Masukkan total pembelian: ");
    scanf("%f", &total_pembelian);

    printf("Total pembelian adalah Rp. %.2f\n", total_pembelian);

    if (total_pembelian >= 100000) {
        potongan_harga = total_pembelian * 0.05;
    }

    printf("Potongan harga yang diterima: Rp. %.2f\n", potongan_harga);


    //4
    int bilangan_pertama, bilangan_kedua;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan_pertama);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan_kedua);

    if (bilangan_pertama % bilangan_kedua == 0 || bilangan_kedua % bilangan_pertama == 0) {
        printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua.\n");
    } else {
        printf("Bilangan pertama bukan kelipatan persekutuan bilangan kedua.\n");
    }


    //5
    int bil1, bil2;
    float hasil;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    if (bil2 != 0) {
        hasil = (float)bil1 / bil2;
        printf("Hasil bagi bilangan pertama dengan bilangan kedua: %.3f\n", hasil);
    } else {
        printf("Kesalahan: Pembagian dengan nol tidak diizinkan.\n");
    }


    //3
    int bilangan1;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan1);

    if (bilangan1 < 0) {
        bilangan1 = -bilangan1;
    }

    printf("Nilai absolut dari bilangan tersebut: %d\n", bilangan1);
    return 0;
}

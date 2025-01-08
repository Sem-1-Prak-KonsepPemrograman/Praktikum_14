#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mengecek apakah bilangan ganjil atau genap
int ganjil(int n);

int main()
{
    // Praktikum 14, Percobaan 1
    printf("--------------------Praktikum 14--------------------\n\n\n");

    printf("Percobaan 1\n");

    // Deklarasi variabel untuk menyimpan input bilangan
    int n;

    // Meminta pengguna memasukkan bilangan
    printf("Cek ganjil atau genap: ");
    scanf("%d", &n);

    // Memanggil fungsi ganjil untuk mengecek bilangan dan menyimpan hasilnya
    n = ganjil(n);

    // Memeriksa hasil dari fungsi ganjil dan mencetak apakah bilangan ganjil atau genap
    if (n == 1)
        printf("Bilangan yang diinputkan merupakan bilangan ganjil\n");
    else
        printf("Bilangan yang diinputkan merupakan bilangan genap\n");

    return 0;
}

// Fungsi ganjil: Mengembalikan 1 jika bilangan ganjil, 0 jika genap
int ganjil(int n)
{
    return (n % 2); // Menggunakan operator modulus untuk menentukan ganjil/genap
}

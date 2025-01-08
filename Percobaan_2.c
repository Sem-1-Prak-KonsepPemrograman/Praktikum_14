#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menghitung faktorial dari sebuah bilangan
long int faktorial(int n);

int main()
{
    // Praktikum 14, Percobaan 2
    printf("--------------------Praktikum 14--------------------\n\n\n");

    printf("Percobaan 2\n");

    // Deklarasi variabel untuk menyimpan input bilangan
    int n;

    // Meminta pengguna memasukkan bilangan
    printf("Hitung faktorial dari: ");
    scanf("%d", &n);

    // Memanggil fungsi faktorial dan menyimpan hasilnya
    long int hasil = faktorial(n);

    // Menampilkan hasil faktorial
    printf("Hasil faktorialnya = %ld\n", hasil);

    return 0;
}

// Fungsi faktorial: Menghitung faktorial dari bilangan n
long int faktorial(int n)
{
    // Deklarasi variabel untuk menyimpan hasil faktorial
    long int x = 1;

    // Loop untuk menghitung faktorial
    for (int i = 1; i <= n; i++)
    {
        x *= i; // Mengalikan nilai x dengan i untuk setiap iterasi
    }

    return x; // Mengembalikan hasil faktorial
}

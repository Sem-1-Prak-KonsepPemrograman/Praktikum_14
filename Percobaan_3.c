#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mengecek apakah bilangan merupakan bilangan prima
int prima(int n);

int main()
{
    // Praktikum 14, Percobaan 3
    printf("--------------------Praktikum 14--------------------\n\n\n");

    printf("Percobaan 3\n");

    // Deklarasi variabel untuk input bilangan dan hasil cek prima
    int n, pr;

    // Meminta pengguna memasukkan bilangan
    printf("Cek prima: ");
    scanf("%d", &n);

    // Memanggil fungsi prima untuk mengecek apakah bilangan prima
    pr = prima(n);

    // Menampilkan hasil apakah bilangan prima atau bukan
    if (pr == 1)
        printf("%d adalah bilangan prima\n", n);
    else if (pr == 0)
        printf("%d bukan bilangan prima\n", n);

    return 0;
}

// Fungsi prima: Mengembalikan 1 jika bilangan prima, 0 jika bukan
int prima(int n)
{
    // Jika bilangan kurang dari atau sama dengan 1, bukan bilangan prima
    if (n <= 1) return 0;

    // Jika bilangan adalah 2, merupakan bilangan prima
    if (n == 2) return 1;

    // Jika bilangan genap selain 2, bukan bilangan prima
    if (n % 2 == 0) return 0;

    // Perulangan untuk memeriksa pembagi bilangan dari 3 hingga n-1
    for (register int i = 3; i < n; i += 2) {
        // Jika ditemukan pembagi, bilangan bukan prima
        if (n % i == 0)
            return 0;
    }

    // Jika tidak ditemukan pembagi, bilangan merupakan prima
    return 1;
}
#include <stdio.h>
#include <stdlib.h>

// Praktikum 14, No. 1
// Fungsi untuk mengonversi derajat ke radian
// Dideklarasikan dengan parameter float untuk menerima nilai derajat
float radian(float);

// Deklarasi variabel global PI dan rd
float PI = 3.14159, 
      rd; // variabel rd untuk menyimpan hasil konversi radian

int main()
{
    // Menampilkan header praktikum
    printf("--------------------Praktikum 14--------------------\n\n\n");

    // Menampilkan judul percobaan
    printf("Percobaan 4\n");

    // Deklarasi variabel untuk menyimpan nilai derajat yang dimasukkan oleh pengguna
    float drjt; 
    
    // Meminta input dari pengguna untuk memasukkan nilai derajat
    printf("Konversi derajat ke radian: ");
    scanf("%f", &drjt); // Menyimpan input derajat yang dimasukkan ke dalam variabel drjt

    // Menghitung konversi derajat ke radian menggunakan fungsi radian()
    rd = radian(drjt);

    // Menampilkan hasil konversi ke radian
    printf("Dalam radian adalah: %.2f", rd); // Menampilkan hasil konversi radian dengan format dua angka desimal

    return 0;
}

// Fungsi untuk mengonversi derajat ke radian
// Menggunakan rumus (derajat * PI) / 180
float radian(float drjt)
{
    rd = drjt / 180 * PI; // Konversi derajat ke radian
    return rd; // Mengembalikan hasil konversi ke fungsi utama
}

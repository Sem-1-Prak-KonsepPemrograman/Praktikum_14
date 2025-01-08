#include <stdio.h>
#include <stdlib.h>

// Praktikum 14, No. 5
// Fungsi untuk mengonversi suhu dari satu satuan ke satuan lainnya
// Dideklarasikan dengan parameter suhu (float), asal (char), dan tujuan (char)
float hasil; // Variabel global untuk menyimpan hasil konversi suhu

// Deklarasi fungsi konversi
float konversi(float suhu, char asal, char tujuan);

int main()
{
    // Menampilkan header praktikum
    printf("--------------------Praktikum 14--------------------\n\n\n");

    // Menampilkan judul percobaan
    printf("Percobaan 5\n");

    // Deklarasi variabel untuk menyimpan satuan suhu dan nilai suhu
    char asal, tujuan;
    float suhu;

    // Meminta input suhu dari pengguna
    printf("Masukkan suhu sumber = ");
    scanf("%f", &suhu); // Menyimpan input suhu ke dalam variabel suhu

    // Meminta input satuan asal dari pengguna
    printf("Masukkan satuan asal (Farenheit atau Reamur) = ");
    scanf(" %c", &asal); // Menyimpan input satuan asal (misal 'F', 'R') ke dalam variabel asal

    // Meminta input satuan tujuan dari pengguna
    printf("Masukkan satuan tujuan (Farenheit(F) atau Reamur(R)) = ");
    scanf(" %c", &tujuan); // Menyimpan input satuan tujuan (misal 'F', 'R') ke dalam variabel tujuan

    // Memanggil fungsi konversi untuk menghitung hasil konversi suhu
    hasil = konversi(suhu, asal, tujuan);

    // Menampilkan hasil konversi suhu
    printf("Hasil konversi suhu %.2f %c = %.2f", suhu, asal, hasil);

    return 0;
}

// Fungsi konversi untuk mengubah suhu dari satu satuan ke satuan lainnya
float konversi(float suhu, char asal, char tujuan)
{
    extern float hasil; // Mengakses variabel global hasil

    // Proses konversi dari satuan asal ke Celcius
    if(asal == 'F') {
        hasil = 5.0 / 9.0 * (suhu - 32); // Mengonversi suhu dari Fahrenheit ke Celcius
    }
    if(asal == 'R') {
        hasil = 5.0 / 4.0 * suhu; // Mengonversi suhu dari Reamur ke Celcius
    }

    // Proses konversi dari Celcius ke satuan tujuan
    if(tujuan == 'F') {
        hasil = (9.0 / 5.0 * suhu) + 32; // Mengonversi suhu dari Celcius ke Fahrenheit
    }
    if(tujuan == 'R') {
        hasil = 4.0 / 5.0 * suhu; // Mengonversi suhu dari Celcius ke Reamur
    }

    // Menampilkan hasil konversi (untuk debugging, bisa dihapus setelah selesai)
    printf("%f", hasil); 

    // Mengembalikan hasil konversi suhu
    return hasil;
}

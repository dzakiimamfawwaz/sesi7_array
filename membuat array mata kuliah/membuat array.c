/*
Dzaki Imam F - 2702367486
date : 23 Sep 2023
*/
#include <stdio.h>

int main() {
    // Array dengan masing-masing data
    char kode[3][25] = { "Algo14522", "Math226451", "Ori300923" }; // Array char 2 dimensi
    char matkul[3][50] = { "Algorithm and Programming", "Discrete Mathematics and Linear Algebra", "Orientasi" };
    int sks[3] = { 4, 4, 4 }; // Array sks tipe data integer
    char grade[3] = { 'A', 'A', 'A' };

    // Menampilkan semua data dari array
    for (int i = 0; i < 3; i++) {
        printf("Data ke-%d:\n", i + 1);
        printf("Kode : %s\n", kode[i]);
        printf("Matakuliah : %s\n", matkul[i]);
        printf("Sks: %d\n", sks[i]);
        printf("Grade: %c\n", grade[i]);
        printf("\n");
    }

    return 0;
}


/*
Dzaki Imam Fawwaz - 2702367486
date : 23 Sep 2023
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20 // Deklarasi array karakter dengan panjang maksimum 20

int main()
{
    // Deklarasi Array, Pointer, dan Array dari Pointer karakter
    char nama1[MAX_LENGTH];
    const char *nama2;
    const char *nama3[MAX_LENGTH]; // Menggunakan array dari pointer karakter

    // Mengisikan data literal string "Brisia Jodie" ke nama1
    strcpy(nama1, "Brisia Jodie");

    // Mengisikan data literal string "Brisia Jodie" ke nama2
    nama2 = "Brisia Jodie";

    // Mengisikan data literal string "Brisia Jodie" ke nama3
    int i;
    for (i = 0; i < MAX_LENGTH; i++)
    {
        nama3[i] = "Brisia Jodie"; // dari index 0 - 19 value = Brisia Jodie
    }

    // Output
    printf("nama1    : %s\n", nama1);
    printf("nama2    : %s\n", nama2);
    printf("nama3[0] : %s\n", nama3[0]);
    printf("nama3[19]: %s\n", nama3[19]);

    return 0;
}


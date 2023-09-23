#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20 // Deklarasi array karakter dengan panjang maksimum 20

int main()
{
    // Deklarasi Array, Pointer, dan Array dari Pointer karakter
    char nama1[MAX_LENGTH];
    const char *nama2;
    const char *nama3[MAX_LENGTH]; // Menggunakan array dari pointer karakter

    strcpy(nama1, "Brisia Jodie");

    nama2 = "Brisia Jodie";

    int i;
    for (i = 0; i < MAX_LENGTH; i++) {
        nama3[i] = "Brisia Jodie"; // Mengatur pointer karakter ke string literal
    }

    // Output
    printf("nama1    : %s\n", nama1);
    printf("nama2    : %s\n", nama2);
    printf("nama3[0] : %s\n", nama3[0]);
    printf("nama3[19]: %s\n", nama3[19]);

    return 0;
}

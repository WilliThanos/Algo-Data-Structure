#include <stdio.h>

void perkalian (int angka1[3][3], int angka2[3][3])
{
    int kali[3], jumlah;
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            for(int c = 0; c <= 2; c++)
            {
                kali[c] = angka1[i][c]*angka2[c][j];
            }
            jumlah = kali[0] + kali[1] + kali[2];
            printf("%d ", jumlah);
        }
        printf("\n");
    }
}

void penjumlahan (int angka1[3][3], int angka2[3][3])
{
    int i, j, jumlah;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            jumlah = angka1[i][j] + angka2[i][j];
            printf("%d ", jumlah);
        }
        printf("\n");
    }
}

void transpose (int angka1[3][3], int angka2[3][3])
{
    int i,j, tukar;
    printf("Transpose Matrix Pertama\n");
    tukar = angka1[1][0];
    angka1[1][0] = angka1[0][1];
    angka1[0][1] = tukar;

    tukar = angka1[2][0];
    angka1[2][0] = angka1[0][2];
    angka1[0][2] = tukar;

    tukar = angka1[2][1];
    angka1[2][1] = angka1[1][2];
    angka1[1][2] = tukar;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", angka1[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix Kedua\n");
    tukar = angka2[1][0];
    angka2[1][0] = angka2[0][1];
    angka2[0][1] = tukar;

    tukar = angka2[2][0];
    angka2[2][0] = angka2[0][2];
    angka2[0][2] = tukar;

    tukar = angka2[2][1];
    angka2[2][1] = angka2[1][2];
    angka2[1][2] = tukar;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", angka2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int angka1[3][3], angka2[3][3], i, j, pilihan;
    printf("Selamat Datang Di Program Pengolah Matrix\n");
    printf("Masukkan Matrix Pertama(3 x 3)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &angka1[i][j]);
        }
    }
    printf("\n");

    printf("Masukkan Matrix Kedua(3 x 3)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &angka2[i][j]);
        }
    }
    printf("\n");

    printf("1. Perkalian Dua Buah Matrix\n");
    printf("2. Penjumlahan Dua Buah Matrix\n");
    printf("3. Transpose Dua Buah Matrix\n");
    printf("4. Keluar\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        perkalian(angka1, angka2);
    }
    else
    {
        if (pilihan == 2)
        {
            penjumlahan(angka1, angka2);
        }
        else
        {
            if (pilihan == 3)
            {
                transpose(angka1, angka2);
            }
            else
                return 0;
        }
    }
}

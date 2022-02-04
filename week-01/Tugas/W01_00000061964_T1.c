#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void LowercaseMatrix(char *str, int wil) 
{
  for (int i = 0; i < wil; i++) 
  {
     if (str[i] >= 65 && str[i] <= 90)
     {
        str[i] = str[i] + 32;
     }
  }
}

void SwitchMatrix(char *str, int wil) 
{
  for (int i = 0; i < wil; i++) 
  {
    if (str[i] >= 65 && str[i] <= 90)
    {
        str[i] = str[i] + 32;
    }
    else if (str[i] >= 97 && str[i] <= 122) 
    {
      str[i] = str[i]-32;
    }
  }
}

void UppercaseMatrix(char *str, int wil) 
{
  for (int i = 0; i < wil; i++) 
  {
    if(str[i] >= 97 && str[i] <= 122)
    {
        str[i] = str[i] - 32;
    }
  }
}

int main() {
  while (1) {
    int menu;
    char kata[100];

    printf ("Silahkan Pilih Menu Yang Telah Disediakan\n");
    printf ("1. Uppercase\n");
    printf ("2. Lowercase\n");
    printf ("3. Switching\n");
    printf ("4. Exit\n");
    printf ("Pilihan : ");
    scanf  ("%i%*c", &menu);
    if (menu > 3 || menu < 1 ) {
      break;
    }

    printf("\nMasukkan Kata yang ingin diubah\t: ");
    scanf("%[^\n]%*c", kata);
    int wil = strlen(kata);

    switch (menu) 
    {
    case 1:
      UppercaseMatrix(kata, wil);
      break;
        case 2:
          LowercaseMatrix(kata, wil);
          break;
            case 3:
              SwitchMatrix(kata, wil);
              break;
    }
    printf("Hasil dari Input yang diberikan\t: %s\n\n", kata);
    system("PAUSE");
    system("cls");
  }
}
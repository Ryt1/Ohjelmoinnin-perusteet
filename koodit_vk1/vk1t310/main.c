#include <stdio.h>

int main()
{
    int salanumero;

    printf("Anna salanumero:\n");
    scanf("%d", &salanumero);

    while(salanumero != 17) {
        printf("Väärä numero! Yritä uudelleen:\n");
        scanf("%d", &salanumero);
    }

    printf("Oikea numero! Onneksi olkoon!\n");
    return 0;
}

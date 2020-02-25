#include <stdio.h>

int main()
{
    int luku;
    int summa = 0;

    printf("Anna kokonaisluku:\n");
    scanf("%d", &luku);

    while (luku != 0) {
        summa = summa + luku;
        printf("Anna uusi kokonaisluku:\n");
        scanf("%d", &luku);
    }

    printf("Antamiesi numeroiden summa on %d\n", summa);

    return 0;
}

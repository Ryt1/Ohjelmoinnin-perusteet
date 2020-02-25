#include <stdio.h>

int main()
{
    int luku1;
    int luku2;
    int luku3;
    int luku4;
    int luku5;
    int summa = 0;

    printf("Anna ensimmäinen kokonaisluku:\n");
    scanf("%d", &luku1);
    printf("Anna toinen kokonaisluku:\n");
    scanf("%d", &luku2);
    printf("Anna kolmas kokonaisluku:\n");
    scanf("%d", &luku3);
    printf("Anna neljäs kokonaisluku:\n");
    scanf("%d", &luku4);
    printf("Anna viides kokonaisluku:\n");
    scanf("%d", &luku5);

    if (luku1 % 2) {
        summa = summa + luku1;
    }
    if (luku2 % 2) {
        summa = summa + luku2;
    }
    if (luku3 % 2) {
        summa = summa + luku3;
    }
    if (luku4 % 2) {
        summa = summa + luku4;
    }
    if (luku5 % 2) {
        summa = summa + luku5;
    }

    printf("Parittomien numeroiden summa on %d\n", summa);

    return 0;
}

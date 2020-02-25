#include <stdio.h>

int main()
{
    float luku1;
    float luku2;
    float summa;

    printf("Anna ensimmäinen luku\n");
    scanf("%g", &luku1);
    printf("Anna toinen luku\n");
    scanf("%g", &luku2);

    summa = luku1 + luku2;

    printf("Numeroiden summa on:%g\n", summa);
    return 0;
}

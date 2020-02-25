#include <stdio.h>

float desimaali[4];
float summa = 0;
float keskiarvo = 0;


int main()
{
    printf("Anna neljä desimaalilukua:\n");

    for(int luku = 0; luku<4; luku++) {
        scanf("%f", &desimaali[luku]);
    }

    for(int luku = 0; luku<4; luku++) {
        summa = summa+desimaali[luku];
    }

    keskiarvo = summa/4;

    printf("Antamiesi numeroiden summa on %f ja keskiarvo on %f\n", summa, keskiarvo);

    return 0;
}

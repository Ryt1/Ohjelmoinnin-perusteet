#include <stdio.h>

int main()
{
    float summa = 0;
    int maara = 0;
    float lisays = 0;
    float keskiarvo = 0;

    printf("Kuinka monta lukua haluat laskea?\n");
    scanf("%i", &maara);

    for(int maara_edistys = 0; maara != maara_edistys; maara_edistys++) {
        printf("Anna laskettava luku:\n");
        scanf("%f", &lisays);
        summa = summa + lisays;
    }

    keskiarvo = summa / maara;

    printf("Antamiesi numeroiden summa on %f\n", summa);
    printf("Antamiesi numeroiden keskiarvo on %f\n", keskiarvo);


    return 0;
}

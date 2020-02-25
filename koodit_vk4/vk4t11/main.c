#include <stdio.h>

float desimaalit[5];

int main()
{
    printf("Anna viisi desimaalilukua:\n");

    for(int luku = 0; luku<5; luku++) {
        scanf("%f", &desimaalit[luku]);
    }

    printf("Antamasi luvut olivat:\n");

    for(int luku1 = 0; luku1<5; luku1++) {
        printf("%f\n", desimaalit[luku1]);
    }
    return 0;
}

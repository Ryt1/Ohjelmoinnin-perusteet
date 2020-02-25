#include <stdio.h>
#define taulukkokoko 7

float taulukko[taulukkokoko];
void luku();
void tulostus();

int main()
{
    luku();
    tulostus();
    return 0;
}

void luku()
{
    for(int kerrat = 0; kerrat<taulukkokoko; kerrat++) {
        printf("\nAnna desimaaliluku:\n");
        scanf("%f", &taulukko[kerrat]);
    }
}

void tulostus()
{
    for(int kerrat = taulukkokoko; kerrat>0; kerrat--) {
        printf("\nLuku %d:\n", kerrat);
        printf("%f\n\n", taulukko[kerrat-1]);
    }
}

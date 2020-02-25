#include <stdio.h>
#define taulukkokoko 7

float luku();
float tulostus(float taulukko[taulukkokoko]);

int main()
{
    float taulukko[taulukkokoko];

    taulukko[taulukkokoko] = luku();
    tulostus(taulukko[taulukkokoko]);
    return 0;
}

float luku()
{
    float taulukko[taulukkokoko];

    for(int kerrat = 0; kerrat<taulukkokoko; kerrat++) {
        printf("\nAnna desimaaliluku:\n");
        scanf("%f", &taulukko[kerrat]);
    }
    return taulukko[taulukkokoko];
}

float tulostus(float taulukko[taulukkokoko])
{


    for(int kerrat = taulukkokoko; kerrat == 0; kerrat--) {
        printf("\nLuku %d:\n", kerrat);
        printf("%f\n\n", taulukko[kerrat-1]);
    }
}

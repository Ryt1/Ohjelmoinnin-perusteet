#include <stdio.h>
#include <stdlib.h>

char taulukko[20];
int intti;
double floatti;

int main()
{
    printf("Anna kokonaisluku: \n");
    scanf("%s", &taulukko[0]);
    printf("\nAnna desimaaliluku: \n");
    scanf("%s", &taulukko[2]);

    intti = atoi(&taulukko[0]);
    floatti = atof(&taulukko[2]);

    floatti = intti+floatti;

    printf("Numeroiden yhteenlaskettu summa on %f", floatti);

    return 0;
}

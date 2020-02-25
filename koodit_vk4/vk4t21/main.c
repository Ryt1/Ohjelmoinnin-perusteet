#include <stdio.h>

//luodaan taulukko ja asetetaan oikeat arvot
int taulukko[2][3] = {{100, 200, 300}, {1000, 2000, 3000}};

int main()
{

//Tulostetaan ensimmäisen rivin luvut
    printf("Ensimmäisen rivin luvut ovat:\n");

    for(int luku = 0; luku<3; luku++) {
        printf("%d\n", taulukko[0][luku]);
    }

//tulostetaan toisen rivin luvut
    printf("\nToisen rivin luvut ovat:\n");

    for(int luku = 0; luku<3; luku++) {
        printf("%d\n", taulukko[1][luku]);
    }



    return 0;
}

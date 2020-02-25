#include <stdio.h>

int taulukko[6];
int parilliset = 0;

int main()
{
    printf("Anna kuusi kokonaislukua:\n");

    for(int luku = 0; luku<6; luku++) {
        scanf("%d", &taulukko[luku]);
    }

    for(int luku = 0; luku<6; luku++) {
        if (taulukko[luku]%2==0) {
            parilliset++;
        }
    }

    printf("Antamistasi numeroista %d olivat parillisia\n", parilliset);

    return 0;
}

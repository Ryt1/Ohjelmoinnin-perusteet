#include <stdio.h>

int main()
{
    char nimi[60];
    int kerrat = 0;


    printf("Anna nimesi:\n");
    scanf("%59s", &nimi);

    printf("Kuinka monta kertaa nimesi tulostetaan?\n");
    scanf("%d", &kerrat);

    for(int edistys = 0; kerrat != edistys; edistys++) {
        printf("%s\n", nimi);
    }
    return 0;
}

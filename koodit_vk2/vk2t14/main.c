#include <stdio.h>

int main()
{
    char nimi[60];

    printf("Mikä on nimesi?\n");
    scanf("%59s", &nimi);
    printf("Nimesi on:%s\n", nimi);
    return 0;
}

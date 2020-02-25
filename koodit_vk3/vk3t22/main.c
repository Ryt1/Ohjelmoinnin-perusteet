#include <stdio.h>

int main()
{
    char kirjain;

    printf("Anna kirjain a, b tai c:\n");
    scanf("%s", &kirjain);

    switch (kirjain) {
    case 'a':
        printf("Annoit kirjaimen A\n");
        break;
    case 'b':
        printf("Annoit kirjaimen B\n");
        break;
    case 'c':
        printf("Annoit kirjaimen C\n");
        break;
    default:
        printf("Väärä kirjain\n");
    }
    return 0;
}

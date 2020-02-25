#include <stdio.h>

int main()
{
    int luku;

    printf("Anna kokonaisluku 1-3:\n");
    scanf("%d", &luku);

    switch (luku) {
    case 1:
        printf("Annoit luvun 1\n");
        break;
    case 2:
        printf("Annoit luvun 2\n");
        break;
    case 3:
        printf("Annoit luvun 3\n");
        break;
    default:
        printf("Väärä kokonaisluku\n");
    }
    return 0;
}

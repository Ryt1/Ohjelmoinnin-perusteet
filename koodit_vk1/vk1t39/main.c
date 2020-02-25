#include <stdio.h>

int main()
{
    int luku;

    printf("Anna Kokonaisluku:\n");
    scanf("%d", &luku);

    if(luku < 0) {
        printf("Antamasi luku %d on negatiivinen\n", luku);
    } else {
        printf("Antamasi luku %d on positiivinen\n", luku);
    }
    return 0;
}

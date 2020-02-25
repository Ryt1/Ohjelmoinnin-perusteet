#include <stdio.h>

int main()
{
    int luku1;
    int luku2;

    printf("Anna ensimmäinen luku\n");
    scanf("%d", &luku1);
    printf("Anna toinen luku\n");
    scanf("%d", &luku2);

    if(luku1 < luku2) {
        printf("Antamasi luvut suuruusjärjestyksessä:\n");
        printf("%d\n", luku2);
        printf("%d\n", luku1);
    } else {
        printf("Antamasi luvut suuruusjärjestyksessä:\n");
        printf("%d\n", luku1);
        printf("%d\n", luku2);
    }
    return 0;
}

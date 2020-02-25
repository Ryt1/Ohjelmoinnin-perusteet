#include <stdio.h>

int main()
{
    char string[60];
    int n = 3;

    printf("Anna sana tai lause:\n");
    scanf("%59s", &string);

    printf("Kolme ensimmäistä kirjainta ovat: %.*s\n", n, string);

    return 0;
}

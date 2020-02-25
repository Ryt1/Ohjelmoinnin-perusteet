#include <stdio.h>

int KokLuk = 0;
float FloLuk = 0;

int intti();
float floatti();

int main()
{

    KokLuk = intti("");
    FloLuk = floatti("");

    printf("Antamasi kokonaisluku on %d ja antamasi desimaaliluku on %f\n", KokLuk, FloLuk);
    return 0;
}

int intti()
{
    int luku;
    printf("Anna kokonaisluku:\n");
    scanf("%d", &luku);
    return luku;
}

float floatti()
{
    float luku;
    printf("Anna desimaaliluku:\n");
    scanf("%f", &luku);
    return luku;
}

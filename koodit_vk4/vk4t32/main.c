#include <stdio.h>

float neliolasku();
float piiri;

int main()
{
    piiri = neliolasku();
    printf("Antamasi neliön piiri on %f\n", piiri);
    return 0;
}

float neliolasku()
{
    float sivunmitta;
    float piiri;

    printf("Anna neliön sivun mitta:\n");
    scanf("%f", &sivunmitta);
    piiri = 4*sivunmitta;
    return piiri;
}


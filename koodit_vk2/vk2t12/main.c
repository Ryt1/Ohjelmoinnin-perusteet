#include <stdio.h>

int main()
{
    //Julistetaan muuttujat
    int luku1;
    int luku2;
    int osamaara;
    int vertaus;

    //Kysytään luvut
    printf("Anna ensimmäinen kokonaisluku\n");
    scanf("%d", &luku1);
    printf("Anna toinen kokonaisluku\n");
    scanf("%d", &luku2);

    //Lasketaan lukujen osamäärä
    osamaara = luku1 / luku2;
    vertaus = osamaara * luku2;

    if(vertaus == luku1) {
        printf("Numerosi ovat jaollisia toisillaan!\n");
    } else {
        printf("Numerosi eivät ole jaollisia toisillaan!\n");
    }

    return 0;
}

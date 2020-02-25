#include <stdio.h>
#define PITUUS 60 //Merkkijonon maksimipituus
#define LUENTA PITUUS-1 //Kuinka monta merkkiä scanf lukee

void tutkimus();
int alasku = 0;
char jono[PITUUS];
char a = 'a';
char A = 'A';


int main()
{
    printf("Anna merkkijono (max 59 merkkiä):\n");
    scanf("%s", &jono[PITUUS]);
    tutkimus();
    return 0;
}

void tutkimus()
{
    for(int maara = 0; maara == LUENTA; maara++) {
        if (jono[maara] == A || jono[maara] == a) {
            alasku++;
        }
    }

    printf("Antamassasi merkkijonossa oli yhteensä %d A-kirjainta\n", alasku);
}

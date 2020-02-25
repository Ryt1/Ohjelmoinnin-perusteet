#include <stdio.h>

int pisteet;

int main()
{
    printf("Anna opiskelijan pistemäärä:\n");
    scanf("%d", &pisteet);


    if(pisteet >= 8 && pisteet <= 11) {
        printf("Pistemaaralla %d saa arvosanan 1\n", pisteet);
    } else if (pisteet >= 12 && pisteet <= 14) {
        printf("Pistemaaralla %d saa arvosanan 2\n", pisteet);
    } else if (pisteet >= 15 && pisteet <= 18) {
        printf("Pistemaaralla %d saa arvosanan 3\n", pisteet);
    } else if (pisteet >= 19 && pisteet <= 21) {
        printf("Pistemaaralla %d saa arvosanan 4\n", pisteet);
    } else if (pisteet >= 22 && pisteet <= 24) {
        printf("Pistemaaralla %d saa arvosanan 5\n", pisteet);
    } else if (pisteet >= 0 && pisteet <= 7) {
        printf("Pistemaaralla %d ei saa arvosanaa.\n", pisteet);
    } else {
        printf("Pistemaara %d ei ole mahdollinen.\n", pisteet);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int pisteet;

    printf("Anna opiskelijan pistemäärä:\n");
    scanf("%d", &pisteet);

    if(pisteet <=7) {
        printf("pistemaaralla %d ei saa arvosanaa\n", pisteet);
    } else if (pisteet <= 11) {
        printf("Pistemaaralla %d saa arvosanan 1\n", pisteet);
    } else if (pisteet <= 14) {
        printf("Pistemaaralla %d saa arvosanan 2\n", pisteet);
    } else if (pisteet <= 18) {
        printf("Pistemaaralla %d saa arvosanan 3\n", pisteet);
    } else if (pisteet <= 21) {
        printf("Pistemaaralla %d saa arvosanan 4\n", pisteet);
    } else if (pisteet <= 24) {
        printf("Pistemaaralla %d saa arvosanan 5\n", pisteet);
    }
    return 0;
}

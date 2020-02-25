#include <stdio.h>

int main()
{
    int kuukauden_numero;

    printf("Anna kuukauden numero:\n");
    scanf("%i", &kuukauden_numero);

    switch (kuukauden_numero) {
    case 1:
        printf("Ensimmäinen kuukausi on Tammikuu\n");
        break;
    case 2:
        printf("Toinen kuukausi on Helmikuu\n");
        break;
    case 3:
        printf("Kolmas kuukausi on Maaliskuu\n");
        break;
    case 4:
        printf("Neljäs kuukausi on Huhtikuu\n");
        break;
    case 5:
        printf("Viides kuukausi on Toukokuu\n");
        break;
    case 6:
        printf("Kuudes kuukausi on Kesäkuu\n");
        break;
    case 7:
        printf("Seitsemäs kuukausi on Heinäkuu\n");
        break;
    case 8:
        printf("Kahdeksas kuukausi on Elokuu\n");
        break;
    case 9:
        printf("Yhdeksäs kuukausi on Syyskuu\n");
        break;
    case 10:
        printf("Kymmenes kuukausi on Lokakuu\n");
        break;
    case 11:
        printf("Yhdestoista kuukausi on Marraskuu\n");
        break;
    case 12:
        printf("Kahdestoista kuukausi on Joulukuu\n");
        break;
    default:
        printf("Tuntematon kuukausi\n");
    }
    return 0;
}

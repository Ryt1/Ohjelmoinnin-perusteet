#include <stdio.h>
#define PII 3.14

void valikko();
int valinta;
void nelio();
void ympyra();

int main()
{
    valikko();
    return 0;
}

void valikko()
{
  int valinta = 0;

  printf("\n\nLaskentavalikko\n");
  printf("1. Neliön piirin laskenta\n");
  printf("2. Ympyrän piirin laskenta\n");
  printf("9. Lopetus\n");
  printf("\nSyötä toiminnan numero:\n");
  scanf("%d", &valinta);

  switch (valinta) {
  case 1:
      nelio();
      valikko();
      break;
  case 2:
      ympyra();
      valikko();
      break;
  case 9:
      printf("\n\nOlet lopettanut ohjelman suorittamisen.\n");
      break;
  default:
      printf("Väärä valinta\n\n");
      valikko();
      break;
  }

}


void nelio()
{
    float sivu = 0;
    float piiri = 0;

    printf("\nAnna neliön sivun pituus:\n");
    scanf("%f", &sivu);
    piiri = sivu*4;
    printf("\nNeliön piiri on %f\n", piiri);
}

void ympyra()
{
    float sade = 0;
    float piiri = 0;

    printf("\nAnna ympyrän säde:\n");
    scanf("%f", &sade);
    piiri = 2*PII*sade;
    printf("\nYmpyrän piiri on %f\n", piiri);

}

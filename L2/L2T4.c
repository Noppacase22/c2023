#include <stdio.h>

#define PII 3.141

int main(void) {
    float sade, keha, ala;
    int valinta;

    printf("Anna ympyrän säde: ");
    scanf("%f", &sade);

    printf("\nValikko:\n");
    printf("1) Laske ympyrän kehän pituus\n");
    printf("2) Laske ympyrän pinta-ala\n");
    printf("Valitse: ");
    scanf("%d", &valinta);
    switch (valinta)
    {
    case 1:
        keha = 2 * PII * sade;
        printf("Ympyrän säde on %.3f ja sen kehän pituus %.3f.", sade, keha);
        break;
    case 2:
        ala = PII * sade * sade;
        printf("Ympyrän säde on %.3f ja sen pinta-ala on %.3f.", sade, ala);
        break;
    
    default:
    printf("Tuntematon valinta.");
        break;
    }

    return(0);
}
#include <stdio.h>

char valikko(int valinta) {
    printf("\nValitse haluamasi toiminto:\n");
    printf("1) Lisää lukuun\n");
    printf("2) Tulosta tulokset\n");
    printf("0) Lopeta\n");
    printf("Anna valintasi: ");
    scanf("%d", &valinta);
    printf("\n");
    return(valinta);
}

int laske(int luku, char *tiedostonimi) {
    char rivi[30];
    int uusiluku, summa = 0;
    FILE *tiedosto;
    printf("Anna lukuun lisättävä kokonaisluku: ");
    scanf("%d", &uusiluku);
    summa = luku + uusiluku;
    printf("%d+%d=%d\n", luku, uusiluku, summa);
    if ((tiedosto = fopen(tiedostonimi, "a")) == NULL) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan");
        exit(0);
    }
    fprintf(tiedosto, "%d+%d=%d\n", luku, uusiluku, summa);
    fclose(tiedosto);
    return(summa);
}

int tulosta(char *tiedostonimi) {
    FILE *tiedosto;
    char rivi[50];

    printf("Tiedostossa oleva laskuhistoria:\n");
    if ((tiedosto = fopen(tiedostonimi, "r")) == NULL) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan");
        exit(0);
    }
    while (fgets(rivi, 50, tiedosto) != NULL) {
        printf("%s", rivi);
    }
    fclose(tiedosto);
    printf("Tiedosto '%s' luettu ja tulostettu.\n", tiedostonimi);
    return(0);
}

int main(void) {
    int luku, valinta;
    char tiedostonimi[30];
    printf("Anna kokonaisluku: ");
    scanf("%d", &luku);
    printf("Anna kirjoitettavan tiedoston nimi: ");
    scanf("%s", tiedostonimi);

    do {
        valinta = valikko(valinta);
        if (valinta == 1) {
            luku = laske(luku, tiedostonimi);
        } else if (valinta == 2) {
            tulosta(tiedostonimi);
        } else if (valinta == 0) {
            printf("Lopetetaan.\n");
        } else {
            printf("Tuntematon valinta, yritä uudestaan.\n");
        }
        
    } while (valinta != 0);
    printf("\nKiitos ohjelman käytöstä.");
    return(0);
}
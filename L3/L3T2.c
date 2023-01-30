#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lueTiedosto(char lueNimi[30]) {
    FILE *tiedosto;
    char rivi[50];
    int summa = 0;
    if ((tiedosto = fopen(lueNimi, "r")) == NULL) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan");
        exit(0);
    }
    while (fgets(rivi, 50, tiedosto) != NULL) {
        summa += atoi(rivi);
    }
    fclose(tiedosto);
    printf("Tiedosto '%s' luettu, lukujen summa oli %d.\n\n", lueNimi, summa);
    return(summa);
}

int kirjoitaTiedosto(char kirjoitaNimi[30], int summa) {
    FILE *tiedosto;
    if ((tiedosto = fopen(kirjoitaNimi, "w")) == NULL) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan");
        exit(0);
    }
    fprintf(tiedosto, "Lukujen summa oli %d.\n", summa);
    fclose(tiedosto);
    printf("Tiedosto '%s' kirjoitettu.\n\n", kirjoitaNimi);
    return(0);
}

int main(void) {
    char rivi[50], lueNimi[30], kirjoitaNimi[30];
    int summa ;

    printf("Tämä ohjelma laskee tiedostossa olevien lukujen summan.\n");
    printf("Anna luettavan tiedoston nimi: ");
    scanf("%s", lueNimi);
    summa = lueTiedosto(lueNimi);
    printf("Anna kirjoitettavan tiedoston nimi: ");
    scanf("%s", kirjoitaNimi);
    kirjoitaTiedosto(kirjoitaNimi, summa);
    printf("Kiitos ohjelman käytöstä.\n");
    return(0);
}
#include <stdio.h>

#define MAXCHARS 60

int laskePituus(char *jono) {
    int pituus;
    for (pituus = 0; jono[pituus] != '\n'; pituus++);
    return(pituus);
}

int lisaa(char *jono1, char *jono2) {
    char yhtjono[MAXCHARS];
    int pituus1, pituus2, yhtpituus;
    pituus1 = laskePituus(jono1);
    pituus2 = laskePituus(jono2);
    yhtpituus = pituus1 + pituus2;

    if (yhtpituus >= 60) {
        printf("Merkkijonojen yhteenlaskettu pituus on liian pitkä ohjelman muistialueelle.\n");
        return(-1);
    }
    
    for (int i = 0; i < pituus1; i++) {
        char merkki = yhtjono[i];
        yhtjono[i] = jono1[i];
    }
    for (int j = 0; j < pituus2; j++) {
        yhtjono[(pituus1+j)] = jono2[j];
    }

    printf("Yhdistetty merkkijono on:\n");
    printf("'%s'\n", yhtjono);    
    return(0);
}

int main(void) {
    char jono1[MAXCHARS], jono2[MAXCHARS];
    int pituus1, pituus2, yhtpituus;

    printf("Anna ensimmäinen merkkijono (max %d merkkiä): ", MAXCHARS/2);
    fgets(jono1, MAXCHARS/2, stdin);
    printf("Anna toinen merkkijono (max %d merkkiä): ", MAXCHARS/2);
    fgets(jono2, MAXCHARS/2, stdin);

    lisaa(jono1, jono2);
    printf("Kiitos ohjelman käytöstä.");
    return(0);
}
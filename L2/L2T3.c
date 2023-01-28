#include <stdio.h>
#include <string.h>

int main(void) {
    char merkki, jono[15];
    int iMerkki, summa = 0, i = 0;

    printf("Anna merkki: ");
    scanf("%c", &merkki);
    iMerkki = merkki;
    printf("Merkki '%c' on ASCII-taulukon mukaan lukuna %d.\n", merkki, iMerkki);
    printf("Anna merkkijono: ");
    scanf("%s", jono);

    while (i < strlen(jono)){
        iMerkki = jono[i];
        summa = summa + iMerkki;
        i++;
    }

    printf("Merkkijonon '%s' merkkien summa on %d.\n", jono, summa);
    return(0);
}
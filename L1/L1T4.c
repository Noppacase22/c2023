#include <stdio.h>

int main(void) {
    char merkki;
    char jono[20];
    printf("Anna merkki: ");
    scanf("%c", &merkki);
    printf("Annoit merkin '%c'.\n", merkki);
    printf("Anna korkeintaan 20 merkkiä pitkä merkkijono: ");
    scanf("%s", jono);
    printf("Annoit merkkijonon '%s'.\n", jono);
    return(0);
}
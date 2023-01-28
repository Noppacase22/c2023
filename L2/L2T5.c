#include <stdio.h>


int main(void) {
    int luku, uusiluku, valinta;
    printf("Anna kokonaisluku: ");
    scanf("%d", &luku);
    do {
        printf("\nValikko:\n");
        printf("1) Lisää lukuun\n");
        printf("2) Vähennä luvusta\n");
        printf("0) Lopeta\n");
        printf("Valintasi: ");
        scanf("%d", &valinta);
        printf("\n");

        if (valinta == 1) {
            printf("Anna lukuun lisättävä kokonaisluku: ");
        } else if (valinta == 2) {
            printf("Anna luvusta vähennettävä kokonaisluku: ");
        } else if (valinta == 0) {
            printf("Lopetetaan.\n");
        } else {
            printf("Tuntematon valinta, yritä uudestaan.\n");
        }

        if (valinta == 1 || valinta == 2) {
            scanf("%d", &uusiluku);
            if (valinta == 2) {
                uusiluku = -uusiluku;
            }
            luku += uusiluku;
            printf("Luku on nyt %d.\n", luku);
        }
        
    } while (valinta != 0);
    printf("\nKiitos ohjelman käytöstä.");
    return(0);
}
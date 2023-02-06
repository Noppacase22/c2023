#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define OFFSET 32

int setSeed(){
    int seed;
    printf("Anna satunnaisgeneraattorin siemenluku: ");
    scanf("%d", &seed);
    srand(seed);
    return(0);
}

int kysyMerkit() {
    int merkkeja;
    printf("Anna arvottavien merkkien määrä: ");
    scanf("%d", &merkkeja);
    return(merkkeja);
}

int arvoMerkit(char *taulu, int merkkeja) {
    int iArvo, index = 0;
    char cMerkki;
    for (int i = 0; i < merkkeja; i++) {
        iArvo = rand() % 95;
        cMerkki = iArvo + OFFSET;
        if (isalnum(iArvo + OFFSET) || cMerkki == ' ') {
            taulu[index] = cMerkki;
            index++;
        }
    }
    taulu[index] = '\0';
    return(index);
}

int etsiC(char *taulu, int index) {
    for (int i = 0; i < index; i++) {
        if (taulu[i] == 'c') {
            printf("\nMerkkijonosta löydettiin merkki 'c'.\n");
            return(1);
        }
    }
    
    printf("\nMerkkijonossa ei ollut merkkiä 'c'.\n");
    return(0);
}

int main(void) {
    int merkkeja, pituus;
    char taulu[30];
    printf("Tämä ohjelma luo satunnaisia merkkijonoja.\n");

    setSeed();
    merkkeja = kysyMerkit();
    pituus = arvoMerkit(taulu, merkkeja);

    etsiC(taulu, pituus);
    printf("Generoitiin merkkijono '%s', jossa on %d merkkiä.\n", taulu, pituus);
    printf("Kiitos ohjelman käytöstä.\n");
    return(0);
}
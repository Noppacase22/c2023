#include <stdio.h>

float laskin(float kanta, float korkeus) {
    float ala;
    ala = kanta * korkeus;
    return(ala);
}

int main(void) {
    float kanta, korkeus, ala;
    printf("Tämä ohjelma laskee suorakulmion pinta-alan.\n");
    printf("Anna suorakulmion kanta: ");
    scanf("%f", &kanta);
    printf("Anna suorakulmion korkeus: ");
    scanf("%f", &korkeus);
    ala = laskin(kanta, korkeus);
    printf("Suorakulmion pinta-ala on %.2f.\n", ala);
    printf("Kiitos ohjelman käytöstä.\n");
    return(0);
}
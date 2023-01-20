#include <stdio.h>

int main(void) {
    int luku;
    float pi;
    printf("Anna kokonaisluku: ");
    scanf("%d", &luku);
    printf("Anna liukuluku: ");
    scanf("%f", &pi);
    printf("Annoit luvut %d ja %.2f.\n", luku, pi);
    return(0);
}
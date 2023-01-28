#include <stdio.h>

#define MIN 3
#define MAX 10

int main(void) {
    int tahtia;
    printf("Anna kokonaisluku väliltä %d - %d: ", MIN, MAX);
    scanf("%d", &tahtia);
    printf("\n");
    if (tahtia < MIN || tahtia > MAX) {
        printf("Antamasi luku ei ole määritellyllä välillä.");
    } else {
        for (int i = 0; i < tahtia; i++) {
            for (int j = 0; j < tahtia; j++) {
                printf("*");
            }
            printf("\n");
        }
        
    }
    return(0);
}
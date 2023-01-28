#include <stdio.h>

int main(void) {
    int tehtavamaara, arvosana;
    printf("Anna palautettujen tehtävien lukumäärä: ");
    scanf("%d", &tehtavamaara);

    if (tehtavamaara < 15){
        arvosana = 0;
    } else if (tehtavamaara < 18){
        arvosana = 1;
    } else if (tehtavamaara < 21) {
        arvosana = 2;
    } else if (tehtavamaara < 24) {
        arvosana = 3;
    } else if (tehtavamaara < 27) {
        arvosana = 4;
    } else if (tehtavamaara < 31) {
        arvosana = 5;
    } else {
        printf("Kurssilla on vain 30 tehtävää.");
        return(0);
    }

    printf("Olet palauttanut %d tehtävää, joten arvosanasi on %d.\n", tehtavamaara, arvosana);
    return(0);
}
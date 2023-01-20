#include <stdio.h>

int main(void) {
    int eka, toka, tulo, lasku, jaannos;
    printf("Anna ensimmäinen kokonaisluku: ");
    scanf("%d", &eka);
    printf("Anna toinen kokonaisluku: ");
    scanf("%d", &toka);
    eka++;
    tulo = (eka--)  * toka;
    lasku = (eka / toka--) - 10;
    jaannos = eka++ % (toka++);

    printf("%d * %d = %d\n", eka--, toka, tulo);
    printf("(%d / %d) - 10 = %d\n", eka, toka--, lasku);
    printf("%d %% %d = %d\n", eka, toka, jaannos);
    return(0);
}
#include <stdio.h>

int main(void)
{

    int x;
    float y, ans = 0;
    printf("Combien de nombres voulez-vous soustraire du nombre initial ?\n");
    scanf("%d", &x);
    printf("\nVeuillez entrer le nombre initial : ");
    scanf("%f", &ans);
    printf("\nVeuillez entrer les valeurs à soustraire ");
    for (int i = 1; i <= x; i++)
    {
        printf("\nvaleur %d = ", i);
        scanf("%f", &y);
        ans = ans - y;
    }
    printf("le résultat est %.2f\n", ans);

    return 0;
}
#include <stdio.h>

int main()
{
    int u, k, nbr, i;

    printf("Entrez la borne de depart (u) : ");
    scanf("%d", &u);
    printf("Entrez la borne de fin (k) : ");
    scanf("%d", &k);

    for (nbr = u; nbr <= k; nbr++)
    {

        printf("\n--- TABLE DE MULTIPLICATION DE %d ---\n", nbr);

        for (i = 0; i <= 12; i++)
        {
            printf("\t   %d * %d = %d\n", nbr, i, nbr * i);
        }
    }

    return 0;
}
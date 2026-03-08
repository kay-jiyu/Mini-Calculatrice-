#include <stdio.h>

int main(void)
{
    int n, p;

    do
    {
        printf("\n--- Calcul de l'Arrangement Anp ---\n");
        printf("Entrez n (le total) : ");
        scanf("%d", &n);
        printf("Entrez p (le nombre choisi) : ");
        scanf("%d", &p);

        if (n < 0 || p < 0 || n < p)
        {
            printf("ERREUR : Les nombres doivent etre positifs et n doit etre >= p.\n");
            printf("Veuillez recommencer.\n");
        }

    } while (n < 0 || p < 0 || n < p);

    printf("Valeurs conformes ! Debut du calcul...\n");
    float ans = 1.0;
    for (int i = 0; i < p; i++)
    {
        ans = ans * (n - i);
    }
    printf("Resultat Anp​ = %.0f\n", ans);
    return 0;
}

#include <stdio.h>

int main(void)
{
    float numerateur = 1.0;   // Pour l'Arrangement (Anp)
    float denominateur = 1.0; // Pour la Factorielle de p (p!)
    float resultat;
    int n, p;

    do
    {
        printf("\n--- Calcul de la combinaison Cnp ---\n");
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

    // --- Calcul du numérateur (Anp) ---
    for (int i = 0; i < p; i++)
    {
        numerateur = numerateur * (n - i);
    }

    // --- Calcul du dénominateur (p!) ---
    for (int i = 1; i <= p; i++)
    {
        denominateur = denominateur * i;
    }

    resultat = numerateur / denominateur;

    printf("La combinaison Cnp est : %.0f\n", resultat);
    return 0;
}

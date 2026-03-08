#include <stdio.h>

int main(void)
{
    int n, m; // n pour le numérateur, m pour les diviseurs
    float y, ans = 0, res = 0;

    // --- (Le numérateur) ---
    printf("Combien de nombres voulez-vous diviser (le numérateur) ?\n");
    if (scanf("%d", &n) != 1)
    {
        printf("\nErreur : Saisie invalide ! Le programme s'arrête.\n");
        return 1;
    }

    printf("\nSaisie du numérateur (%d valeur(s)) :\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("Nombre n%d = ", i);
        if (scanf("%f", &y) != 1)
        {
            printf("\nErreur : Saisie invalide ! Le programme s'arrête.\n");
            return 1;
        }
        ans = ans + y;
    }
    // --- (Les diviseurs) ---
    printf("\nPar combien de nombres voulez-vous les diviser (le numérateur) ?\n");
    if (scanf("%d", &m) != 1)
    {
        printf("\nErreur : Saisie invalide ! Le programme s'arrête.\n");
        return 1;
    }
    printf("\nVeuillez saisir le dénominateur :\n");
    for (int i = 1; i <= m; i++)
    {
        printf("Nombre m%d = ", i);
        if (scanf("%f", &y) != 1)
        {
            printf("\nErreur : Saisie invalide ! Le programme s'arrête.\n");
            return 1;
        }
        res = res + y;

        // on ne divise jamais par zéro !
        if (y != 0)
        {
            ans = ans / res;
        }
        else
        {
            printf("Erreur : Division par zero impossible. \n");
        }
    }

    // --- RÉSULTAT FINAL ---
    printf("\nLe resultat final de la division est : %.2f\n", ans);

    return 0;
}

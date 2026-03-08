#include <stdio.h>
#include <stdlib.h>

// Fonction qui vérifie si un nombre est premier
int est_premier(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    int compteur = 0;
    int candidat = 2;

    printf("Entrez le nombre n de nombres premiers à afficher : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Erreur : Veuillez entrer un entier positif.\n");
        return 1;
    }

    printf("Les %d premiers nombres premiers sont :\n", n);

    while (compteur < n)
    {
        if (est_premier(candidat))
        {
            printf("%d ", candidat);
            compteur++;
        }
        candidat++;
    }

    printf("\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h> // Nécessaire pour exit()
#include <math.h>   // Nécessaire pour pow() & sqrt()

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    else
        return (nb * my_compute_factorial_rec(nb - 1));
}
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
    int choixPrincipal;
    char choixLettre;

    printf("=== Bienvenue ===\n");
    printf("1- Calculs arithmetiques\n");
    printf("2- Denombrement\n");
    printf("3- Equation du second degre\n");
    printf("4- Nombres pairs\n");
    printf("5- Nombres premiers\n");
    printf("6- Valeur absolue d’un nombre\n");
    printf("7- Table de multiplication d’un intervalle de nombres entiers\n");
    printf("Veuillez faire un choix : ");
    scanf("%d", &choixPrincipal);

    switch (choixPrincipal)
    {
    case 1:
        printf("\n--- MENU N° 1 ---\n");
        printf("a- Addition de n nombres\n");
        printf("b- Soustraction de n nombres\n");
        printf("c- Multiplication de n nombres\n");
        printf("d- Division de n nombres par m nombres\n");
        printf("Veuillez faire un choix : ");
        scanf(" %c", &choixLettre);

        switch (choixLettre)
        {
        case 'a':
        {
            int x;
            float y, ans = 0;
            printf("combien de nombre voulez-vous additionner ?\n");
            scanf("%d", &x);
            printf("\nveuillez entrer les nombres que vous voulez additionner");
            for (int i = 1; i <= x; i++)
            {
                printf("\nnombre %d = ", i);
                scanf("%f", &y);
                ans = ans + y;
            }
            printf("le résultat est %.2f\n", ans);
            exit(0);
        }
        break;
        case 'b':
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
            exit(0);
        }
        break;
        case 'c':
        {
            int x;
            float y, ans = 1;
            printf("Combien de nombres voulez-vous diviser (le groupe N) ?\n");
            scanf("%d", &x);

            printf("Par combien de nombres voulez-vous les diviser (le groupe M) ?\n");
            printf("\nveuillez entrer les nombres que vous voulez additionner");
            for (int i = 1; i <= x; i++)
            {
                printf("\nnombre %d = ", i);
                scanf("%f", &y);
                ans = ans * y;
            }
            printf("le résultat est %.2f\n", ans);
            exit(0);
        }
        break;
        case 'd':
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
            exit(0);
        }
        break;
        default:
            printf("Choix invalide.\n");
        }
        break;

    case 2:
        printf("\n--- MENU N° 2 ---\n");
        printf("a- Factoriel d’un entier n\n");
        printf("b- Arrangement Anp\n");
        printf("c- Combinaison Cnp\n");
        printf("Veuillez faire un choix : ");
        scanf(" %c", &choixLettre);

        switch (choixLettre)
        {
        case 'a':
        {
            int n;

            printf("Entrez un nombre (0-12) : ");
            if (scanf("%d", &n) != 1)
                return (1);
            printf("La factorielle de %d est : %d\n", n, my_compute_factorial_rec(n));
            exit(0);
        }
        break;
        case 'b':
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
            exit(0);
        }
        break;
        case 'c':
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
            exit(0);
        }
        break;
        default:
            printf("Choix invalide.\n");
        }
        break;

    case 3:
    {
        int a, b, c;
        float x, x0, x1, x2, delta;
        char choix;

        do
        {

            printf("----------Résolution de l'équation du second degré---------\n Une équation du second degré est sous la forme de ax²+bx+c = 0\n");

            printf("Veuillez entrer a, a = ");
            scanf("%d", &a);

            printf("Veuillez entrer b, b = ");
            scanf("%d", &b);

            printf("Veuillez entrer c, c = ");
            scanf("%d", &c);

            printf("Votre équation du second degré est : %dx² + %dx + %d = 0\n", a, b, c);

            if (a == 0 && b == 0)
            {
                printf("L'équation n'admet pas de solution.\nSoit SR l'ensemble des solutions dans R, SR:{ }\nMerci d'avoir utilisé ce programme.");
            }
            else if (a == 0)
            {
                if (b == 0)
                {
                    printf("L'équation n'admet pas de solution.\nSoit SR l'ensemble des solutions dans R, SR:{ }\n");
                }
                else
                {
                    x = -(float)c / b;
                    printf("x = %.2f, soit SR l'ensemble des solutions dans R, SR:{%.2f}", x, x);
                }
            }
            else
            {
                delta = (float)b * b - 4.0f * (float)a * (float)c;

                printf("Δ = %.2f\n", delta);

                if (delta > 0)
                {
                    x1 = (-(float)b + sqrt(delta)) / (2.0f * (float)a);
                    x2 = (-(float)b - sqrt(delta)) / (2.0f * (float)a);
                    printf("Δ > 0 alors l'équation admet deux solutions distinctes X1 et X2 telles que X1 = %.2f et X2 = %.2f\nSoit SR l'ensemble des solutions dans R, SR:{%.2f ; %.2f}", x1, x2, x1, x2);
                }

                switch (delta == 0)
                {
                case 1:
                    x0 = -(float)b / (2.0f * (float)a);
                    printf("Δ = %.0f, alors l'équation admet une solution unique X0 telle que X0 = %.2f\nSoit SR l'ensemble des solutions dans R, SR:{%.2f}", delta, x0, x0);
                    break;
                case 0:
                    printf("Δ < 0, alors l'équation n'admet aucune solution dans R\nSoit SR l'ensemble des solutions dans R, SR:{ }");
                    break;
                }
            }

            printf("\nVoulez-vous résoudre une autre équation ? (O/n) : ");
            scanf(" %c", &choix);

        } while (choix == 'O');
        exit(0);
    }
    break;
    case 4:
    {
        int n, i;

        printf("Entrez n : ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("%d ", i * 2);
        }

        printf("\n");
        exit(0);
    }
    break;
    case 5:
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
        exit(0);
    }
    break;
    case 6:
    {
        int n, val_abs;

        printf("Entrez un nombre n : ");
        scanf("%d", &n);

        if (n < 0)
        {
            val_abs = -n;
        }

        else
        {
            val_abs = n;
        }

        printf("La valeur absolue est : %d\n", val_abs);
        exit(0);
    }
    break;
    case 7:
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
        exit(0);
    }
    break;

    default:
        printf("Option non disponible.\n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(void)
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

    return (0);
}

#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    else
        return (nb * my_compute_factorial_rec(nb - 1));
}

int main(void)
{
    int n;

    printf("Entrez un nombre (0-12) : ");
    if (scanf("%d", &n) != 1)
        return (1);
    printf("La factorielle de %d est : %d\n", n, my_compute_factorial_rec(n));
    return (0);
}
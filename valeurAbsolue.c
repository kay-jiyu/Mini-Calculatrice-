#include <stdio.h>

int main()
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

    return 0;
}
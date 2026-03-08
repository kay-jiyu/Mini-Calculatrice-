#include <stdio.h>

int main()
{
    int n, i;

    printf("Entrez n : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", i * 2);
    }

    printf("\n");
    return 0;
}
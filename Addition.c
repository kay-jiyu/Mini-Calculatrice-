#include <stdio.h>


int main(void)
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

    return 0;
}
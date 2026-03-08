#include <stdio.h>

int main(void)
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

    return 0;
}

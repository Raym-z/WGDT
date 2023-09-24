#include <cstdio>

int main()
{
    int a;
    scanf("%d", &a);
    if (a > 0)
    {
        puts("positif");
    }
    else if (a == 0)
    {
        puts("nol");
    }
    else
    {
        puts("negatif");
    }

    return 0;
}
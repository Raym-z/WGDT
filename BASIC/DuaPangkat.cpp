#include <cstdio>

int main()
{
    double a;
    scanf("%lf", &a);
    while (a >= 2)
    {
        a /= 2;
    }
    if (a == 1)
        puts("ya");
    else
        puts("bukan");
    return 0;
}
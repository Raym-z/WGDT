#include <cstdio>
int main()
{
    int a;
    int total = 0;
    while (scanf("%d", &a) != EOF)
    {
        total += a;
    }
    printf("%d\n", total);
    return 0;
}
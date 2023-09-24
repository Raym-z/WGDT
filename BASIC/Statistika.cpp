#include <cstdio>

int main()
{
    int n;
    int max = -100000, min = 100000;
    scanf("%d", &n);
    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
    }




    printf("%d %d\n", max, min);
    return 0;
}
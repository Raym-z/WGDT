#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    scanf("%lf", &a);
    int x = trunc(a);

    if (a == x)
    {
        printf("%d %d\n", x, x);
    }
    else if (a > 0)
    {
        printf("%d %d\n", x, x + 1);
    }
    else if (a < 0)
    {
        printf("%d %d\n", x - 1, x);
    }

    return 0;
}
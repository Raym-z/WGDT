#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int counter = 0;
    int a;
    for (int j = 0; j < n; j++)
    {
        counter = 0;
        scanf("%d", &a);
        if (a == 1)
        {
            puts("BUKAN");
            continue;
        }
        for (int i = 1; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                counter++;
            }
            if (counter > 1)
            {
                puts("BUKAN");
                break;
            }
        }
        if (counter == 1)
            puts("YA");
    }

    return 0;
}
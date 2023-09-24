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
        for (int i = 1; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                counter++;
            }
            if (counter > 3)
            {
                puts("BUKAN");
                break;
            }
        }
        if (counter <= 3)
            puts("YA");
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j - 1 >= i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", counter % 10);
                counter++;
            }
        }
        puts("");
    }

    return 0;
}
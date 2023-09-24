#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        puts("");
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a + 1];

    int total = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    printf("%d\n", total);
    return 0;
}
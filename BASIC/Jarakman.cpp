#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int total = (abs(a - c) + abs(b - d));
    printf("%d\n", total);

    return 0;
}
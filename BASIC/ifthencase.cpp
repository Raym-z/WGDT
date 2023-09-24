#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[11];
    scanf("%s", str);
    int a = strlen(str);
    if (a == 1)
    {
        puts("satuan");
    }
    else if (a == 2)
    {
        puts("puluhan");
    }
    else if (a == 3)
    {
        puts("ratusan");
    }
    else if (a == 4)
    {
        puts("ribuan");
    }
    else if (a == 5)
    {
        puts("puluhribuan");
    }

    return 0;
}
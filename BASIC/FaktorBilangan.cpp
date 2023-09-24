#include <cstdio>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int counter = 0;
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            arr[counter] = i;
            counter++;
        }
    }
    printf("%d\n", a);
    for (int i = counter - 1; i > 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    if (a != 1)
    {
        printf("1\n");
    }
    return 0;
}
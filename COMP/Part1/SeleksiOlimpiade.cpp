#include <bits/stdc++.h>
using namespace std;

struct name
{
    char ID[10];
    int lvl1, lvl2, lvl3;
};

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapID(char a[], char b[])
{
    char temp[strlen(a) + 1];

    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main()
{
    int t;
    cin >> t;

    struct name data[100];

    int n, m;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        char str[6];
        cin >> str;

        int temp;
        for (int j = 0; j < n; j++)
        {
            cin >> data[j].ID >> data[j].lvl1 >> data[j].lvl2 >> data[j].lvl3;
        }

        if (m >= n)
        {
            cout << "YA" << endl;
            continue;
        }

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = 0; k < n - j - 1; k++)
            {
                if (data[k].lvl3 < data[k + 1].lvl3)
                {
                    Swap(data[k].lvl3, data[k + 1].lvl3);
                    Swap(data[k].lvl2, data[k + 1].lvl2);
                    Swap(data[k].lvl1, data[k + 1].lvl1);
                    swapID(data[k].ID, data[k + 1].ID);
                }
                else if (data[k].lvl3 == data[k + 1].lvl3)
                {
                    if (data[k].lvl2 < data[k + 1].lvl2)
                    {
                        Swap(data[k].lvl2, data[k + 1].lvl2);
                        Swap(data[k].lvl1, data[k + 1].lvl1);
                        swapID(data[k].ID, data[k + 1].ID);
                    }
                    else if (data[k].lvl2 == data[k + 1].lvl2)
                    {
                        if (data[k].lvl1 < data[k + 1].lvl1)
                        {
                            Swap(data[k].lvl1, data[k + 1].lvl1);
                            swapID(data[k].ID, data[k + 1].ID);
                        }
                    }
                }
            }
        }

        bool flag = 0;
        for (int i = 0; i < m; i++)
        {
            if (strcmp(data[i].ID, str) == 0)
            {
                puts("YA");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            puts("TIDAK");
        }
    }
    return 0;
}
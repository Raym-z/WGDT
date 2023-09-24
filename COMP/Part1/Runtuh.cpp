    #include <bits/stdc++.h>
    using namespace std;

struct database
{
    char str[10];
};

int main()
{
    int r, c;
    cin >> r >> c;
    database data[22];

    for (int i = 0; i < r; i++)
    {
        cin >> data[i].str;
    }
    char ones[11] = {0};
    char zeroes[11] = {0};

    for (int i = 0; i < c; i++)
    {
        ones[i] = '1';
        zeroes[i] = '0';
    }

    while (1)
    {
        int index;
        int flag = 0;

        for (int i = 0; i < r; i++) 
        {
            if (strcmp(data[i].str, ones) == 0)
            {
                strcpy(data[i].str, zeroes);
                index = i;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
        for (int i = index - 1; i >= 0; i--)
        {
            for (int j = 0; j < c; j++)
            {
                int k = i;
                while (data[k].str[j] == '1' && data[k + 1].str[j] == '0')
                {
                    data[k].str[j] = '0';
                    data[k + 1].str[j] = '1';
                    k++;
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        cout << data[i].str << endl;
    }

    return 0;
}
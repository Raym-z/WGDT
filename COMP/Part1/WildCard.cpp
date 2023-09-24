#include <bits/stdc++.h>
using namespace std;

bool valid(char *str, char *temp)
{
    int len = strlen(str);
    int len1 = strlen(temp);

    for (int j = 0; str[j] != '*'; j++)
    {
        if (str[j] != temp[j])
            return false;
    }
    for (int j = 1; str[len - j] != '*'; j++)
    {
        if (str[len - j] != temp[len1 - j])
            return false;
    }
    return true;
}

int main()
{

    char str[105];
    cin >> str;
    int n;
    cin >> n;
    char word[105];
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (strlen(str) - 1 > strlen(word))
            continue;
        if (valid(str, word))
            cout << word << endl;
    }

    return 0;
}
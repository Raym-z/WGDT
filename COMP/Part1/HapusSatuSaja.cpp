#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

    int counter = 0;
    if (str1.size() - 1 == str2.size())
    {
        int k = 0;
        for (int j = 0; j < str1.size(); j++)
        {
            // cout << str1[j] << " " << str2[k] << endl;
            if (str1[j] == str2[k])
            {
                counter++;
                k++;
            }
        }
        // cout << counter << " " << k << endl;
        if (counter == k && counter == str2.size())
            cout << "Tentu saja bisa!" << endl;
        else
            cout << "Wah, tidak bisa :(" << endl;
    }
    else
        cout << "Wah, tidak bisa :(" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count;
    int max = 0;
    int num;
    int arr[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
        if (arr[num] == count)// to check if the new arr[num] is also a modus
        {
            if (num > max) // check which modus is bigger
            {
                max = num;
            }
        }

        else if (arr[num] > count) // the new modus
        {
            count = arr[num];
            max = num;
        }
    }
    cout << max << endl;

    return 0;
}

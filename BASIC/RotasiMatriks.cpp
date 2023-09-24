#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int arr[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << endl;

    int rotated[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            rotated[i][j] = arr[x - 1 - j][i];
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

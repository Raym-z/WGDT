#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, P;
    cin >> N >> M >> P;
    long long int arr1[105][105];
    long long int arr2[105][105];
    long long int arr3[105][105];
    long long sum = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            for (int k = 0; k < M; k++)
            {
                sum += (arr1[i][k] * arr2[k][j]);
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
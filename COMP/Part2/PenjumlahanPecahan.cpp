#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C, D, E, F;
    cin >> A >> B >> C >> D;
    F = B * D;
    E = A * D + C * B;
    cout << E / __gcd(E, F) << " " << F / __gcd(E, F) << endl;
}
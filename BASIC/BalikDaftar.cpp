#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int arr[101];

    while (cin >> arr[counter])
    {
        counter++;
        if (counter == 100) // Add a check to prevent array overflow
        {
            break;
        }
    }

    for (int i = counter - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

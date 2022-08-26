// Name-prince poonia
// roll NO-2010990550
// Set Number:-
// Question Number:-2

#include <bits/stdc++.h>
using namespace std;

void pairSum(int arr[], int n, int x)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                found = true;
                cout << "Pair Found (" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
    if (found == false)
    {
        cout << "Pair not found";
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;

    pairSum(arr, n, x);
}
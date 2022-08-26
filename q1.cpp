// Name-prince poonia
// roll NO-2010990550
// Set Number:-03
// Question Number:-1
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    if (n % 2 != 0)
    {

        for (int i = 1; i <= n; i = i + 2)
        {

            if (arr[i - 1] > arr[i] && arr[i + 1] > arr[i])
            {
                int temp = arr[i];
                if (arr[i - 1] > arr[i + 1])
                {
                    arr[i] = arr[i - 1];
                    arr[i - 1] = temp;
                }
                else if (arr[i + 1] > arr[i - 1])
                {
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            else if (arr[i - 1] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            else if (arr[i + 1] > arr[i])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    else
    {
        for (int i = 1; i < n; i = i + 2)
        {
            if (i * 2 < n)
            {

                if (arr[i - 1] > arr[i] && arr[i + 1] > arr[i])
                {
                    int temp = arr[i];
                    if (arr[i - 1] > arr[i + 1])
                    {
                        arr[i] = arr[i - 1];
                        arr[i - 1] = temp;
                    }
                    else if (arr[i + 1] > arr[i - 1])
                    {
                        arr[i] = arr[i + 1];
                        arr[i + 1] = temp;
                    }
                }
                else if (arr[i - 1] > arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[i - 1];
                    arr[i - 1] = temp;
                }
                else if (arr[i + 1] > arr[i])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
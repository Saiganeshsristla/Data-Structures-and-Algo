#include <bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 9;

    cout << pairSum(arr, 5, k);

    return 0;
}
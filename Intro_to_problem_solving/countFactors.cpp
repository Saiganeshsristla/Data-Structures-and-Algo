#include <bits/stdc++.h>
using namespace std;

int countFactors(int n)
{
    int factors = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
        }
    }
    return factors;
}

// optimized code
int countFactors2(int n)
{
    int factors = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                factors++;
            }
            else
            {
                factors += 2;
            }
        }
    }
    return factors;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int count = countFactors2(num);

    cout << count;

    return 0;
}
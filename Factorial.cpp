#include <bits/stdc++.h>
using namespace std;

// int fact(int n)
// {
//     int fact = 1;
//     for (int i = n; i >= 1; i--)
//     {
//         fact = fact * i;
//     }

//     return fact;
// }

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;

    // cout << "Factorial of " << n << " : " << fact(n);
    cout << fact(n);

    return 0;
}
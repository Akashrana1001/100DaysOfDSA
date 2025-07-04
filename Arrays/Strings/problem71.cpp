#include <bits/stdc++.h>
using namespace std;

bool isDivBy7(int n)
{
    if (n == 0 || n == 7)
        return true;

    while (n >= 10)
    {
        int lastD = n % 10;
        n = n / 10;
        n = abs(n - 2 * lastD);
    }

    return n == 0 || n == 7;
}

int main()
{
    int n = 371;
    if (isDivBy7(abs(n)))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}
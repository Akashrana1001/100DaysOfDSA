#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int a, int sum)
{
    if (a == 0)
    {
        return 0;
    }
    int digits = a % 10;
    // sum += digits;
    int val = a / 10;
    return digits + sumofdigits(val,sum);
}

int main()
{
    // sum of digits
    int a;
    cin >> a;
    int sum = 0;
    int ans = sumofdigits(a, sum);
    cout << ans << endl;

    return 0;
}
// CPP program to count subarrays having product
// less than k.
#include <iostream>
#include <vector>
using namespace std;

int countSubArrayProductLessThanK(const vector<int> &a,long long k)
{
    const int n = a.size();
    long long p = 1;
    int res = 0;
    for (int start = 0, end = 0; end < n; end++)
    {

        p *= a[end];

        while (start < end && p >= k)
            p /= a[start++];

        if (p < k)
        {
            int len = end - start + 1;
            res += len;
        }
    }

    return res;
}

int main()
{
    cout << countSubArrayProductLessThanK({1, 2, 3, 4}, 10)
         << endl;
    cout << countSubArrayProductLessThanK({1, 9, 2, 8, 6, 4, 3}, 100)
         << endl;
    cout << countSubArrayProductLessThanK({5, 3, 2}, 16)
         << endl;
    cout << countSubArrayProductLessThanK({100, 200}, 100)
         << endl;
    cout << countSubArrayProductLessThanK({100, 200}, 101)
         << endl;
}
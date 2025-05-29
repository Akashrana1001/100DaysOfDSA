// Two sum without hashmaps and simple using nested loops

#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    // we have to find 2 number whose sum matches the targets;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        cout << "no such elements found";
    return 0;
}

/*
time complexity is O(n^2);
space complexity is O(n)
*/
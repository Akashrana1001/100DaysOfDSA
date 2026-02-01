#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;

    // Palindrome is a string that reads the same forward and backward, e.g., racecar

    int i = 0;
    int j = a.length() - 1;
    bool check = true;  // initialize as true

    while (i < j) {
        if (a[i] != a[j]) {
            check = false;
            break;
        }
        i++;
        j--;
    }

    if (check) {
        cout << "This string is a palindrome.";
    } else {
        cout << "This string is not a palindrome.";
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

// trapped rain water in the containers


int main() {
    vector<int> height = { 11,15,6,8,9,10 };

      int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int trapped = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            // We are on the lower side
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                trapped += (leftMax - height[left]);
            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                trapped += (rightMax - height[right]);
            right--;
        }
    }
    cout<<trapped;


    return 0;
}
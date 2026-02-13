// Problem: Two Sum (sorted array)
// Approach: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    int l = 0, r = nums.size() - 1;

    while(l < r) {
        if(nums[l] + nums[r] == target) {
            cout << l << " " << r;
            break;
        }
        else if(nums[l] + nums[r] < target) l++;
        else r--;
    }
}

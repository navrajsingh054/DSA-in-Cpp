// Problem: Maximum Subarray
// Approach: Kadane"s ALgorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;
        for(int i = 0;i < nums.size();i++){
            currSum += nums[i];
            maxSum = max(maxSum,currSum);
            if (currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
      }
};

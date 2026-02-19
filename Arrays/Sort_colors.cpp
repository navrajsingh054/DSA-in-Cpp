// Problem : Sort Colors
// Approach : Dutch National Flag Algorithm (DNF Algo)
// Time Complexity : O(n) (1 Pass)
// Space Complexity : O(1)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++; low++;
            }
            else if (nums[mid]==1){
                mid++;
            }
            else {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};

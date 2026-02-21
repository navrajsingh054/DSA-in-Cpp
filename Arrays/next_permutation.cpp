// Problem : Next Permutation
// Solution : Optimal
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    void revarray(vector<int>& nums){
        int n = nums.size();
        int st = 0;
        int end = n-1;
        while(st < end){
            swap(nums[st],nums[end]);
            st++; end--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int piv = -1;
        for(int i = n-2;i >= 0;i--){
            if(nums[i]<nums[i+1]){
                piv = i;
                break;
            }
        }

        if(piv==-1){ //edge case
            revarray(nums);
            return;
        }

        for(int i = n-1;i > piv;i--){
            if(nums[i] > nums[piv]){
                swap(nums[i],nums[piv]);
                break;
            }
        }

    int i = piv+1;
    int j = n-1;
    while(i < j){
    swap(nums[i],nums[j]);
     i++; j--;
    }
    }
};

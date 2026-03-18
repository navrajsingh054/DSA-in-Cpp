class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int maxi = 0;
        for(int j = 0;j < n;j++){
            if(nums[j]==1){
                i++;
                if(maxi < i){
                    maxi = i;
                }
            }else{
                i = 0;
            }
    }
    return maxi;
    }
}; i solved it on my own by just reading what i missed

class Solution {
public:
void getCombinations(vector<int> &candidates,int target,int i,vector<int> &ans,vector<vector<int>> &combinations){
    if((target < 0) || (i == candidates.size())){
        return;
    }
    if(target == 0){
        combinations.push_back(ans);
        return;
    }
    ans.push_back(candidates[i]);
    getCombinations(candidates,target-candidates[i],i,ans,combinations);
    ans.pop_back();
    getCombinations(candidates,target,i+1,ans,combinations);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combinations;
        vector<int> ans;
        getCombinations(candidates,target,0,ans,combinations);
        return combinations;
    }
};

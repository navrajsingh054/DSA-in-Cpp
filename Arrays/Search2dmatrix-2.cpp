class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int r = 0;
        int c = n-1;
        while(c >= 0 && r < m){
            int mid = matrix[r][c];
            if(target == mid){
                return true;
            }
            else if(target < mid){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }
};

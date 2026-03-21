class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                int x = grid[i][j];  
                m[x]++;;
                if(m[x]==2){
                ans.push_back(x);
            }
            }
        }

        for(int i = 1;i <= n*n;i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

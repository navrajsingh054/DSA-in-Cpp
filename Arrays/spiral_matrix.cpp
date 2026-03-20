class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int Srow = 0;
        int Erow = m-1;
        int Scol = 0;
        int Ecol = n-1;
        vector<int>ans;
        while(Srow <= Erow && Scol <= Ecol){
            //Top
            for(int j = Scol;j <= Ecol;j++){
                ans.push_back(mat[Srow][j]);
            }
            //Right
            for(int i = Srow+1;i <= Erow;i++){
                ans.push_back(mat[i][Ecol]);
            }
            //Bottom
            for(int j = Ecol-1;j >= Scol;j--){
                if(Srow == Erow){
                    break;
                }
                ans.push_back(mat[Erow][j]);
            }
            //Left
            for(int i = Erow-1;i >= Srow+1;i--){
                if(Scol == Ecol){
                    break;
                }
                ans.push_back(mat[i][Scol]);
            }
            Srow++;
            Erow--;
            Scol++;
            Ecol--;
    }
    return ans;
    }
};

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int first = arr[0];

        for(int i = 1; i < n; i++){
            arr[i-1] = arr[i];
        }

        arr[n-1] = first;
    }
};

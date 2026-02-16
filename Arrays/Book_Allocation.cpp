class Solution {
  public:
  bool isValid(vector<int> &arr,int n,int k,int maxallowedpages){
            int pages = 0;
            int std = 1;
            for(int i = 0; i < n;i++){
            if(arr[i]>maxallowedpages) return false;
            if(pages + arr[i] <= maxallowedpages) {
                pages+=arr[i];
            }else {
                std++;
                pages = arr[i];
            }
            }
            if (std>k) return false;
            return true;
        }
        
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (k>n) return -1;
        
        long long sum = 0;
        for(int val : arr){
            sum+=val;
        }
        
        int st = *max_element(arr.begin(), arr.end());
        int end = sum;
        int ans = 0;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(isValid(arr,n,k,mid)) { 
              end = mid-1; //valid
                ans = mid;
            }else {
               st = mid+1; //invalid
            }
        }
        return ans;
        }
};

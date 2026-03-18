class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = INT_MIN;
        int secondlargest = INT_MIN;
        for(int i = 0;i < n;i++){
            if(arr[i]>largest){
                secondlargest = largest;
                largest = arr[i];
            }
            if((arr[i] < largest) && (secondlargest < arr[i])){
                secondlargest = arr[i];
            }
        }
        if(secondlargest == INT_MIN) return -1;
        return secondlargest;
    }
};

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i = 0;i < n;i++){
    cin>>arr[i];
   }
   unordered_map<int,int> m;
   for(int i = 0;i < n;i++){
    m[arr[i]]++;
   }
   unordered_set<int> printed;

    for(int i = 0; i < n; i++){
        if(m[arr[i]] > 1 && printed.find(arr[i]) == printed.end()){
            cout << arr[i] << " ";
            printed.insert(arr[i]);
        }
    }

   return 0;
}
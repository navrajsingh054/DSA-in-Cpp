#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int> arr(n);
for(int i = 0;i < n;i++){
    cin>>arr[i];
}
unordered_map<int,int> m;
int ans = -1;
for(int i = 0;i < n;i++){
    int x = arr[i];
    int gt = 0;
    int ld = 0;
    while(x > 0){
        ld = x % 10;
        if(ld > gt){
            gt = ld;
        }
        x /= 10;
    }
    if(m.find(gt) != m.end()){
        ans = max(ans,m[gt] + arr[i]);
    }
    m[gt] = max(m[gt],arr[i]);
}
cout<<ans<<endl;
return 0;
}
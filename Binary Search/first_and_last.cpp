#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int>arr(n);
for(int i = 0;i < n;i++){
    cin>>arr[i];
}
int t;
cin>>t;
int st = 0;
int end = n-1;
int f_occ = -1;
int l_occ = -1;

//first occurence
while(st <= end){
    int mid = st + (end-st)/2;
    if(arr[mid] == t){
        f_occ = mid;
        end = mid - 1;
    }
    else if(arr[mid] > t){
        end = mid - 1;
    }
    else {
        st = mid + 1;
    }
}
st = 0;
end = n-1;
//last occurence
while(st <= end){
    int mid = st + (end-st)/2;
    if(arr[mid] == t){
        l_occ = mid;
        st = mid + 1;
    }
    else if(arr[mid] < t){
        st = mid + 1;
    }
    else {
        end = mid - 1;
    }
}
cout<<f_occ<<" "<<l_occ<<endl;
}
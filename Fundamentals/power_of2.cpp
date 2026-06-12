#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n == 0){
        cout<<"Not Power of 2"<<endl;
        return 0;
    }
   while(n % 2 == 0){
    n/=2;
   }
   if(n == 1){
    cout<<"Power of 2"<<endl;
   }
   else {
    cout<<"Not Power of 2"<<endl;
   }
   return 0;
}
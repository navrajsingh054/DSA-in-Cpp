#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
int sum = 0;
int num1 = n;
int count = 0;
while(num1 > 0){
    int ld = num1 % 10;
    count++;
    num1 /= 10;
}
int num2 = n;
while(num2 > 0){
    int ld = num2 % 10;
    sum += pow(ld,count);
    num2 /= 10;
}
if(sum == n){
    cout<<"Armstrong"<<endl;
} else {
    cout<<"Not Armstrong"<<endl;
}
return 0;
}
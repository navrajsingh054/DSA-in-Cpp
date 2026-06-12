#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
s+="$";
int sum = 0;
int curr_no = 0;
for(char ch : s){
    if((ch >= '0') && (ch <= '9')){
        int d = ch - '0';
        curr_no = curr_no*10 + d;
    }else {
        sum += curr_no;
        curr_no = 0;
    }
}
cout<<sum<<endl;
return 0;
}

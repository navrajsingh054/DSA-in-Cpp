#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
string t;
getline(cin,t);
if(s == ""){
    cout<<"Yes"<<endl;
    return 0;
}
int i = 0;
int j = 0;
while(i < s.length() && j != t.length()){
    if(s[i] == t[j]){
        i++;
        j++;
    }
    else {
        j++;
    }
}
if(i == s.length()){
    cout<<"Yes"<<endl;
}
else {
    cout<<"No"<<endl;
}
return 0;
}

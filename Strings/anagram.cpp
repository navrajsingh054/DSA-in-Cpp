#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
string a;
getline(cin,a);
string b;
getline(cin,b);
if(a.length() != b.length()){
    cout<<"Not Anagram"<<endl;
    return 0;
}
bool flag = true;
unordered_map<char,int> m;
for(int i = 0;i < a.length();i++){
    m[a[i]]++;
    m[b[i]]--;
}
for(auto v : m){
    if(v.second != 0){
        flag = false;
        break;
    }
}
if(flag){
    cout<<"Anagram"<<endl;
}
else {
    cout<<"Not Anagram"<<endl;
}
return 0;
}
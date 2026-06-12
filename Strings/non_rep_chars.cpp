#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
string s;
getline(cin,s);
unordered_map<char,int> freq;
for(char ch : s){
    freq[ch]++;
}
for(char ch : s){
    if(freq[ch] == 1){
        cout << ch << " ";
    }
}
return 0;
}
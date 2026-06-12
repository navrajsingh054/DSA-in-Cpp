#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_map<char,int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    char ans;
    int greatest = 0;
    for(char ch : s){
        if(freq[ch] > greatest){
            greatest = freq[ch];
            ans = ch;
        }
    }
    cout<<ans<<endl;
    return 0;
}
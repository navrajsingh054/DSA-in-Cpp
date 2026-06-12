#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
int vow_count = 0;
int const_count = 0;
int space_count = 0;
for(char ch : s){
    char c = tolower(ch);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        vow_count++;
    }
    else if(isalpha(c)){
        const_count++;
    }
    else if(c == ' '){
        space_count++;
    }
}
cout<<"Vowels: "<<vow_count<<endl;
cout<<"Consonants: "<<const_count<<endl;
cout<<"Spaces: "<<space_count<<endl; 
return 0;
}
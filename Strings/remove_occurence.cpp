class Solution {
public:
    string removeOccurrences(string s, string part) {
        int x = part.size();
      while(s.find(part) < string::npos){
        int n = s.find(part);
        s.erase(n,x);
      }
      return s;
    }
};

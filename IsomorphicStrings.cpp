class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for(int i=0; i<s.length()-1;i++){
            if(s[i] == s[i+1] && t[i]!=t[i+1])return false;
            else if(s[i]!= s[i+1] && t[i]==t[i+1]) return false;
        }return true;
    }
};

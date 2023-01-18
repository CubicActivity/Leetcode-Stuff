#include <string>
#include <algorithm>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string b= to_string(x);
        string a= to_string(x);
        reverse(a.begin(),a.end());

        if(a==b){
            return true;
        }else return false;
        
    }
};

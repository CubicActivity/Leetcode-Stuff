class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num>0){
            c++;
            //Before we used num%2
            if((num & 1)==0){	//num: xxxxxxx0 & bitmask: 00000001
            //before we used num /= 2
            num >>= 1;
        }else num--;
        }
        return c;
    }
};

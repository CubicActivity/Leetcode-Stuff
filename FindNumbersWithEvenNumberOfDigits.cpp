class Solution {
public:
    int findNumbers(vector<int>& nums) {
        //How many Numbers with even # of digits in the array nums
        int evenDigits=0;
        for(int i=0;i<nums.size();i++){
            int digits=0;
            while(nums[i]>0){
                digits++;
                nums[i]/=10;
            }
            if(digits%2==0)evenDigits++;
        }
        return evenDigits;
    }
};

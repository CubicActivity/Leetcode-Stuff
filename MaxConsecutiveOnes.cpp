class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxlength=0,max=0;
        
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]==1){
                maxlength++;
            }else{
                maxlength=0;
            }
            if(maxlength>max)max=maxlength;
            
        }
        
        return max;
    }
};

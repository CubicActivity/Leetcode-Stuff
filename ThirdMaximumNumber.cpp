class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        if(nums.size()>=3){
            
            long max1=nums[0],max2=-2147483649,max3=-2147483649;
             for(int i=1;i<nums.size();i++){
            if(nums[i]>max1)max1=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max2 && nums[i]!=max1)max2=nums[i];
        }
        
       for(int i=0;i<nums.size();i++){
            if(nums[i]>max3 && nums[i]!=max1 && nums[i]!=max2)max3=nums[i];
        }
        if(max3!=-2147483649){
            return max3;
        }
        else return max1;
            
        } else if(nums.size()==2) return nums[0]>nums[1]?nums[0]:nums[1];
        else return nums[0];
        
         
    } 
};

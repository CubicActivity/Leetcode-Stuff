class Solution {
public:


    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i==0)
            arr[0]=nums[0];
            else{
                arr[i]=arr[i-1]+nums[i];
            }
        }
        return arr;
    }
};

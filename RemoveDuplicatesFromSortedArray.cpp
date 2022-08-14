class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=101){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                    nums[j]=101;
                    k--;
                }
            }
        }}
        sort(nums.begin(),nums.end());
        return k;
    }
};

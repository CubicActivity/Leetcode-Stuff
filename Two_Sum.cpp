class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    if(nums[i]+nums[j]==target){
                        result={i,j};
                        return result;
                    }
                }
            }
        }return result;
    }
};

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0,rightSum=0;
        for(int i=0;i<nums.size();i++){
            leftSum=0,rightSum=0;
            if(i-1 >=0){
                for(int j=i-1;j>=0;j--){
                    leftSum+=nums[j];
                }
            }
            for(int j=i+1;j<nums.size();j++){
                rightSum+=nums[j];
            }
            if(leftSum==rightSum)return i;
        }return -1;
    }
};

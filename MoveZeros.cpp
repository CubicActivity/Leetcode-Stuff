class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
     // Check for edge cases.
         if (nums.size() != 0) {
          int zeros=0;
         
        int writePointer=0;
    
        for(int readPointer=0;readPointer<nums.size();readPointer++){
            
            if(nums[readPointer]!=0){
                nums[writePointer]=nums[readPointer];
                
                writePointer++;
            }else zeros++;
        }
             for(int i= 0;i<zeros;i++){
                 cout<<"lol";
                 nums[nums.size()-i-1]=0;
             }
             
    }
}
      
};


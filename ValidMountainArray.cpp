class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()>=3){
            int i=1;
            
            //uphill
                for(;i<arr.size()-1;i++){
                    if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                        break; 
                    else if(arr[i-1]==arr[i] || arr[i]==arr[i+1])
                    return false; 
                    else if(arr[0]>arr[1]) return false;
                    else if(i==arr.size()-2) return false;
                }
            
            
            //i+1 is the downhill
            for(int j=i+1;j<arr.size()-1;j++){
                if(arr[j]<arr[j+1]){
                return false;
                }else if(arr[j-1]==arr[j] || arr[j]==arr[j+1]){
                return false; 
            }
            
            
            }
            
            return true;
        }return false;
        
    }
};


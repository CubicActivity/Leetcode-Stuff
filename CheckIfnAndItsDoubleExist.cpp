class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if((arr[i]*2==arr[j] || arr[i]==arr[j]*2) && i!=j){
                    cout<<arr[i]<<","<<arr[j];
                    return true;
                }
            }
        }return false;
    }
};

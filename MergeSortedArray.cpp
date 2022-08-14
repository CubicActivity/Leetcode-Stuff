class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m,c=0;i<m+n;i++,c++){
            nums1[i]=nums2[c];
        }
        sort(nums1.begin(),nums1.end());
    }
};

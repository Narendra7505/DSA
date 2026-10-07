class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),ans=0;
      int m=n*(n+1)/2;
        for(int  i=0;i<nums.size();i++){
            ans=ans+nums[i];
        }
        return m-ans;
        
    }
};
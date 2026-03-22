class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int vect:nums){
            ans=ans^vect;
        }
        return ans;
        
    }
};
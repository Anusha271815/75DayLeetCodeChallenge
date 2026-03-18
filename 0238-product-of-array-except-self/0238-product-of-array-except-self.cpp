class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans(nums.size(),1);
        int suffix=1;
        int prefix=1;
        for(int i=1;i<nums.size();i++){
            suffix*=nums[i-1];
            ans[i]*=suffix;
        }
        for(int i=nums.size()-2;i>=0;i--){
            prefix*=nums[i+1];
            ans[i]*=prefix;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector <int> ans;
        int n = num.size();
        int st=0;
        int end=n-1;
        while(st<end){
            if(num[st]+num[end]==target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }else if(num[st]+num[end]<target){
                st++;
            }else{
                end--;
            }
        }
        return ans;
    }
};
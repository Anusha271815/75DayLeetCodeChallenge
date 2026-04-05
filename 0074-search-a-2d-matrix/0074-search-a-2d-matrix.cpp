class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            int s=0,end=m-1;
            while(s<=end){
                int mid=s+(end-s)/2;
                if(target==arr[i][mid]){
                    cout<<i<<","<<mid;
                    return true;
                }else if(target<arr[i][mid]){
                    end=mid-1;
                }else{
                    s=mid+1;
                }
            }
        }
    return false;
    }
};
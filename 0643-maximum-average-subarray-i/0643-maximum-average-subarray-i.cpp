class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int l=0;
        int count=0;
        int sum=0;
        double avg=0;
        double ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            count+=1;
            if(i-l==k){
                sum-=arr[l];
                l++;
                count-=1;
            }
            if(i-l+1==k){
                if(count!=0){
                avg=(double)sum/count;
                ans=max(ans,avg);
                }
            }
        }
        return ans;
    }
};
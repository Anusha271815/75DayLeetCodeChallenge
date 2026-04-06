class Solution {
public:
    int findMin(vector<int>& arr) {
        int st=0,end=arr.size();
        if(arr.size()==1) return arr[0];
        while(st<end){
            int mid=st+(end-st)/2;
            if(arr[arr.size()-1]>arr[0]){
                return arr[0];
            }else{
                if(arr[mid]>=arr[0]){
                    st=mid+1;
                }else{
                    end=mid;
                }
            }
        }
        return arr[st];
    }
};
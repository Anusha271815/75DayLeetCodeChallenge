class Solution {
public:
    int search(vector<int>& arr, int target) {
        int si=0;
        int ei=arr.size()-1;
        while(si<=ei){
            int mid=si+(ei-si)/2;
            if(arr[mid]==target) return mid;
            if(arr[mid]>=arr[si]){
                if(target>=arr[si] && target<arr[mid]){
                    ei=mid-1;
                }else{
                    si=mid+1;
                }
            }else{
                if(target>arr[mid] && target<=arr[ei]){
                    si=mid+1;
                }else{
                    ei=mid-1;
                }
            }
        }
        return -1;
    }
};
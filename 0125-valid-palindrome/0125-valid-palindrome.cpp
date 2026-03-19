class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n<2){
            return true;
        }
        char str[200000];
        int j=0;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                str[j++]=tolower(s[i]);
            }
        }
        str[j] = '\0';
        int k=strlen(str);
        if(k<2) return true;
        int st=0,end=k-1;
        while(st<end){
            if(str[st]!=str[end]){
                return false;
            }else{
                st++;
                end--;
            }
        }
        return true;
    }
};
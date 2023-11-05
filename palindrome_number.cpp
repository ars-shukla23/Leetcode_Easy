class Solution {
public:
    bool isPalindrome(int x) {
       bool ans=true;
       if(x<0){
           ans=false;
       }
       else{
       string str=to_string(x);
       string og=str;
       int n=str.size();
       reverse(str.begin(),str.end());
       if(og!=str){
           ans=false;
       }
       
       }
       return ans;
    }
};
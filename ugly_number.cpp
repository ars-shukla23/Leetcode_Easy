class Solution {
public:
    bool isUgly(int n) {
        bool ans=true;
        if(n<1){
            ans=false;
        }
        else if(n==1){
            ans=true;
        }
        else{
            while(n%2==0){
                n=n/2;
            }
            while(n%3==0){
                n=n/3;
            }
            while(n%5==0){
                n=n/5;
            }
            if(n!=1){
                ans=false;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for(int i=left;i<=right;i++){
            bool flag=true;
            int num=i;
            while(num>0){
                int x=num%10;
                //digits.push_back(num%10);
                num=(int)floor(num/10);
                if(x==0||i%x!=0){
                   flag=false;
                   break;
                }
            }
            if(flag==true){
                vec.push_back(i);
            }

        }
        return vec;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int a,b;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if((nums.at(i)+nums.at(j))==target && i!=j){
                   
                    a=i;
                    b=j;
                    break;
                }

            }
        }
       result.push_back(a);
       result.push_back(b);  
      return result;
    }
};
lass Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        for(int i=0;i<(2*n);i++){
           if(i<n){
            result.push_back(nums.at(i));
           }
           else{
               result.push_back(nums.at(i-n));
           }
        }
        return result;
    }
};
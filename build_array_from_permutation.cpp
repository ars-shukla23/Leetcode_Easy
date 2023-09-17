class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        int val;
        for(int i=0;i<n;i++){
            val=nums.at(nums.at(i));
            result.push_back(val);
        }
        return result;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++){
            int c=target-nums[i];
            if(num.find(c)!=num.end()){
                return {num[c],i};
            }
            num[nums[i]]=i;
        }
        return {};
    }
};
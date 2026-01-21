class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>result;
        
        for(int i=0;i<nums.size();i++){
            int needed = target - nums[i];

                if(result.count(needed)){
                return {result[needed],i};
            }

            result[nums[i]] = i;
        }
         

        return {};
        
    }
};
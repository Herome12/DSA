class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>result;

        for(int i=0;i<nums.size();i++){
            int c = target- nums[i];

            if(result.find(c)!=result.end()){
                return{result[c],i};
            }
           result[nums[i]]=i;
            
        }

        return {};
       
    }
};
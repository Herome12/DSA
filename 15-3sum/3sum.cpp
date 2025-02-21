class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans2;
        int target = 0;

        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 

            unordered_map<int, int> ans; 
            for (int j = i + 1; j < nums.size(); j++) {
                int c = target - nums[i] - nums[j];

                if (ans.find(c) != ans.end()) {
                    ans2.push_back({nums[i], nums[j], c});

                    
                    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
                }
                ans[nums[j]] = j; 
            }
        }
        return ans2;
    }
};

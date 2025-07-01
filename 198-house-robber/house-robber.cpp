class Solution {
    private:
    int result(int ind,vector<int>&dp,vector<int>&nums){
         
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1)return dp[ind];
        int pick = nums[ind]+result(ind-2,dp,nums);
        int notpick = 0+result(ind-1,dp,nums);

        return dp[ind] = max(pick,notpick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        int index = n-1;

        return result(index,dp,nums);
    }
};
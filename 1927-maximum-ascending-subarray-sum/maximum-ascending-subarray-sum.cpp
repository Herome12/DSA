class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=0;
        int ans=0;

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                sum+=nums[i-1];
            }else{
                sum+=nums[i-1];
                ans = max(ans,sum);
                sum=0;
            }
        }
        sum+=nums[nums.size()-1];
        ans=max(ans,sum);
        return ans;
    }
};
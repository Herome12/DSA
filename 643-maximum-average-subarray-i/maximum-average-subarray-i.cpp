class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double maxSum;
       double sum;
       for(int i=0;i<k;i++){
        sum+=nums[i];
       }
       maxSum= sum;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k]; // Add the new element and subtract the old one
            maxSum = max(maxSum, sum);   // Update maxSum if the current window's sum is greater
        }
        return maxSum/k;
    }
};
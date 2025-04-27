class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int result = 0;

        
        for (int i = 0; i < nums.size() - 1; i++) {  
            if (nums[i] < nums[i + 1]) {
                result = i + 1;  
            }
        }

        return result;
    }
};

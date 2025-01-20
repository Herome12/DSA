class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())return 0;

        int UniqueIndex =0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[UniqueIndex]){
                UniqueIndex++;
                nums[UniqueIndex]=nums[i];
            }
        }
        return UniqueIndex + 1;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0;
        int high = n-1;
        int mid = low +high/2;
        int index =0;
        for(int i=0;i<n;i++){
            if(nums[i]== target){
                return i;
            }

        }
        return -1;
       

    }
};
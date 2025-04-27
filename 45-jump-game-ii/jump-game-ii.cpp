class Solution {
public:
    int jump(vector<int>& nums) {
        int minIndex=0;
        int currentIndex =0;
        int farthest = 0;
        for(int i=0;i<nums.size()-1;i++){
            farthest= max(farthest,i+nums[i]);
            if(i==currentIndex){
                minIndex++;
                currentIndex=farthest;
            }


        }
        return minIndex;
    }
};
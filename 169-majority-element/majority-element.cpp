class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umang;
        int n = nums.size();

        for(int num:nums){
            umang[num]++;
           if(umang[num]>n/2){
            return num;
        }
        }

        

        return -1;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg = 1;
        vector<int>result(nums.size());
        for(int num:nums){
            if(num>0){
                result[pos]= num;
                pos +=2;

            }

            if(num<0){
                result[neg]=num;
                neg +=2;

            }
        }

        return result;
    }
};
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count =0;
        unordered_map<int,int>freq;

        for(int num:nums){
            int c = k-num;
            if(freq[c]>0){
                count++;
                freq[c]--;
            }else{
                freq[num]++;
            }



        }
        return count;
        
    }
};
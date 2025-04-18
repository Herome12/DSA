class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>dp;
        for(int i=0;i<n+1;i++){
              dp.push_back(__builtin_popcount(i));           
        }

        return dp;
    }
};
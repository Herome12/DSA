class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int>sum;
        for(auto&num :nums1){
            sum[num[0]] +=num[1];
        }

        for(auto&num :nums2){
            sum[num[0]] +=num[1];
        }

        vector<vector<int>>m;
        for(auto&[id,value]:sum){
            m.push_back({id,value});
        }
        sort(m.begin(),m.end());

        return m;
    }
};
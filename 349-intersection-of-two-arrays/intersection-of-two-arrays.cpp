#include <unordered_set>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end()); // store elements of nums1
        unordered_set<int> ans; // to store intersection (no duplicates)

        for (int i = 0; i < nums2.size(); i++) {
            if (s.find(nums2[i]) != s.end()) { // if nums2[i] is present in nums1
                ans.insert(nums2[i]);
            }
        }

        vector<int> result(ans.begin(), ans.end()); // convert set to vector
        return result;
    }
};

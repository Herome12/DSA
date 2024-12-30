class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter; // Start with an empty vector
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    // Check if the element is not already in the result vector
                    if(find(inter.begin(), inter.end(), nums1[i]) == inter.end()) {
                        inter.push_back(nums1[i]); // Add it if not already in the result
                    }
                    break; // No need to check further elements in nums2
                }
            }
        }
        return inter;
    }
};

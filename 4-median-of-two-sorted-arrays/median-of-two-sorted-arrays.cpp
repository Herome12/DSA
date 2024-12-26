#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        merge.insert(merge.end(), nums1.begin(), nums1.end());
        merge.insert(merge.end(), nums2.begin(), nums2.end());

    
        sort(merge.begin(), merge.end());

        
        int n = merge.size();
        if (n % 2 == 1) {
            
            return merge[n / 2];
        } else {
            
            return (merge[n / 2 - 1] + merge[n / 2]) / 2.0;
        }
    }
};

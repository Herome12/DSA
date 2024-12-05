#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;  // Maps prefix sum to its frequency
        int currentSum = 0; 
        int count = 0;
        
        // Initialize the map with 0 sum having 1 occurrence (for subarrays starting from the beginning)
        prefixSumCount[0] = 1; 
        
        for (int num : nums) {
            currentSum += num;  // Update the running sum
            
            // Check if the current sum - k exists in the map
            if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[currentSum - k];  // Increment count by the frequency of (currentSum - k)
            }
            
            // Update the map with the current sum
            prefixSumCount[currentSum]++;
        }
        
        return count;
    }
};

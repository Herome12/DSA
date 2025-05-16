class Solution {
public:
    void findCombinations(vector<int>& candidates, int target, int start, vector<int> current, vector<vector<int>>& sum) {
        if (target == 0) {
            sum.push_back(current);
            return;
        }
        if (target < 0) return;

        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            findCombinations(candidates, target - candidates[i], i, current, sum); // allow reuse
            current.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sum;
        vector<int> current;
        findCombinations(candidates, target, 0, current, sum);
        return sum;
    }
};

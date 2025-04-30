class Solution {
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills,
                      int strength) {
        int result = 0;
        int left = 0;
        int right = min(tasks.size(), workers.size());
        ranges::sort(tasks);
        ranges::sort(workers);
        auto canComplete = [&](int k, int pillsLeft) {
            map<int, int> sortedWorkers;
            for (int i = workers.size() - k; i < workers.size(); ++i)
                ++sortedWorkers[workers[i]];
            for (int i = k - 1; i >= 0; --i) {
                auto it = sortedWorkers.lower_bound(tasks[i]);
                if (it != sortedWorkers.end()) {
                    if (--(it->second) == 0)
                        sortedWorkers.erase(it);
                } else if (pillsLeft > 0) {
                    it = sortedWorkers.lower_bound(tasks[i] - strength);
                    if (it != sortedWorkers.end()) {
                        if (--(it->second) == 0)
                            sortedWorkers.erase(it);
                        --pillsLeft;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
            return true;
        };
        while (left <= right) {
            int mid = (left + right) / 2;
            if (canComplete(mid, pills)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>seen;
        int start=0;
        int count=0;
        for(int end=0;end<s.size();end++){
           while(seen.find(s[end])!=seen.end()){
            seen.erase(s[start]);
            start++;
           }
           seen.insert(s[end]);
           count = max(count,end-start+1);
        }

        return count;
    }
};
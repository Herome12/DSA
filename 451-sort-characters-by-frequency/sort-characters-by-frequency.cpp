class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;

        for(char c:s){
            freq[c]++;
        }

        vector<pair<int,char>>freqVec;

        for(auto& p :freq){
            freqVec.push_back({p.second,p.first});
        }

        sort(freqVec.rbegin(),freqVec.rend());

        string result = "";

        for(auto&p:freqVec){
            result += string(p.first,p.second);

        }

        return result;
    }
};
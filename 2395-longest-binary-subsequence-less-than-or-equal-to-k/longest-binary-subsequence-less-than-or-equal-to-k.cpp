class Solution {
public:
    int longestSubsequence(string s, int k) {
        int oneCount=0;
        long long value = 0;
        int bitweight = 1;

        for(int i=s.size()-1;i>=0&&value+bitweight<=k;--i){
            if(s[i]=='1'){
                value+=bitweight;
                ++oneCount;
            }

            bitweight<<=1;


        }
        int zerocount= count(s.begin(),s.end(),'0');
        return oneCount+zerocount;
    }
};
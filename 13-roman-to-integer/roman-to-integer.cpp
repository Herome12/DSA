class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>n;
        int sum =0;
        n={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

        for(int i=0;i<s.size();i++){
            if(i+1 <s.size() && n[s[i]]<n[s[i+1]]){
               sum -=n[s[i]];
            }else{
                sum +=n[s[i]];
            }
        }
        return sum;
    }
};
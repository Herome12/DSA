class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string result;
        string word;
        while(ss>>word){
            result = word +" " + result;

        }
        if(!result.empty()){
            result.pop_back();
        }
        return result;
        
    }
};
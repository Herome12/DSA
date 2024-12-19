class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int maxxy=0;
        int count = 0;
      
      for(int i=0;i<n;i++){
        if(s[i]=='('){
            count++;
            maxxy = max(maxxy,count);


        }else if(s[i]==')'){
            count--;
        }
    }
    return maxxy;
    }
};
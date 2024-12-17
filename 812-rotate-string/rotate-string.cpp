class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (n != goal.size()) return false;

        string rotate = s; 
        for (int i = 0; i < n; i++) {

            rotate = rotate.substr(1) + rotate[0];

            
            if (rotate == goal) return true;
        }

        return false; 
    }
};

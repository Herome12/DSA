class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r = height.size()-1;
        int max1=0;

        while(l<r){
            int Vol = abs(r-l)*min(height[l],height[r]);
            max1 = max(Vol,max1);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return max1;
    }
};
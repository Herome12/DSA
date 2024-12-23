class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>merge(candies.size());
       int maxCandies = *max_element(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxCandies){
               merge[i]=true;
            }else{
                merge[i]= false;
            }
            
        }
        return merge;
       
    }
};
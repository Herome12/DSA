class Solution {

    private:
    void dfs(int row,int col,vector<vector<int>>&image,vector<vector<int>>&ans,int color,int delrow[],int delcol[],int initcolor){

        int n = image.size();
        int m = image[0].size();
        ans[row][col] = color;
        for(int i=0;i<4;i++){
            int nrow = row+ delrow[i];
            int ncol = col + delcol[i];
            if(nrow>=0&&ncol>=0&&nrow<n&&ncol<m&&image[nrow][ncol]==initcolor&&ans[nrow][ncol]!=color){
                
                dfs(nrow,ncol,image,ans,color,delrow,delcol,initcolor);
            }
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        int initcolor = image[sr][sc];
        dfs(sr,sc,image,ans,color,delrow,delcol,initcolor);
        return ans;
    }
};
class Solution {
public:
    int dfs(int r,int c,vector<vector<int>>& grid){
        int m=grid.size();
        int n= grid[0].size();
        if(r<0 || r>=m || c<0 || c>=n||grid[r][c]==0){
            return 0;
        }
        grid[r][c]=0;
        int area=1;
        area+=dfs(r+1,c,grid);
        area+=dfs(r-1,c,grid);
        area+=dfs(r,c+1,grid);
        area+=dfs(r,c-1,grid);
        return area;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col= grid[0].size();
        int maxarea=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    int area=dfs(i,j,grid);
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
        
    }
};
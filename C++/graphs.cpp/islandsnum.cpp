#include<iostream>
#include<vector>
#include<queue>
using namespace std;
    int bfs(int sr, int sc, vector<vector<int>>& visited, vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        queue<pair<int, int>> q;
        int perimeter = 0;
        visited[sr][sc] = 1;
        q.push(make_pair(sr, sc));
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            // if((row==0 && col==0) || (row==0&& col==m-1)){
            //     perimeter = perimeter +2;

            // }
            // if((row==n-1 && col==0)|| (row==n-1&& col==m-1) ){
            //     perimeter = perimeter +2;
            // }
            // else if(row==0 || col==0|| row== n-1|| col==m-1){
            //     perimeter++;
            // }
            int nbr=0;
            q.pop();
            // finding neighbourers
            for (int delrow = -1; delrow <= 1; delrow++) {
                for (int delcol = -1; delcol <= 1; delcol++) {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if (nrow == row || ncol == col) {
                        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m){
                            if (grid[nrow][ncol] == 0) {
                                perimeter++;
                            }
                            else if(grid[nrow][ncol] == 1 &&!visited[nrow][ncol]){
                                q.push(make_pair(nrow, ncol));
                                visited[nrow][ncol] = 1;
                                
                            }
                            nbr++;    
                        }
                    }
                }
            }
            perimeter += (4-nbr);
        }
        return perimeter;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
        int ans=0;
         for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1 && visited[i][j] == 0) {
                    ans= bfs(i, j, visited, grid);
                }
            }
        }
        return ans;
    }
    int main(){
        
    }

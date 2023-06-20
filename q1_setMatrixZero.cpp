#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	 int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> ans(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    ans[i][j]=0;
                    for(int k=0;k<m;k++){
                        ans[i][k]=0;
                    }
                    for(int x=0;x<n;x++){
                        ans[x][j]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==0) matrix[i][j]=0;
            }
        }
}
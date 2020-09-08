int Solution::solve(string a, string b) {
    int n=a.length(),m=b.length();
        vector<vector<int> >mat(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                char x=a[i-1],y=b[j-1];
                if(x==y){
                    mat[i][j]=mat[i-1][j-1]+1;
                }
                else{
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        return mat[n][m];
}

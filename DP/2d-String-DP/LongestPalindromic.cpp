int LCS(string text1, string text2) {
    int l1 = text1.length();
    int l2 = text2.length();
    int dp[l1+2][l2+2];
    for(int i=0; i<=l1; i++)
        dp[i][0] = 0;
    for(int j=0; j<=l2; j++)
        dp[0][j] = 0;
    for(int i=1; i<=l1; i++)
    {
        for(int j=1; j<=l2; j++)
        {
            if(text1[i-1] == text2[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[l1][l2];
}
int Solution::solve(string A) {
    string tem = A;
    reverse(A.begin(), A.end());
    return LCS(tem, A);
}

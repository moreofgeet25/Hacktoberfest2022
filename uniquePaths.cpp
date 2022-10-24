class Solution {
public:
 const int mod = 1;
 int fun(int i , int j , vector<vector<int>> &dp ) {
	if (i == 0 && j == 0) {
		return 1;
	}
	if (i < 0 || j < 0) {
		return 0;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	int up  = 0  , left = 0;
	// up
		up  = up + fun(i - 1, j,  dp) ;
  // left  
		left = left + fun(i , j - 1 , dp) ;
	return dp[i][j] = (up + left) ;

}
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m , vector<int>(n,-1)); 
        return fun(m-1,n-1,dp);
    }
};

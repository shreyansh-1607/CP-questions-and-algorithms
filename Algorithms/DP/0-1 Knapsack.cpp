
// code for BOUNDED 0-1 KNAPSACK

#include <bits/stdc++.h>

int knapsack_bounded(vector<int> wt, vector<int> val, int n, int maxWt)
{
   vector<vector<int>> dp(n, vector<int> (maxWt+1, 0));
   for(int w= wt[0]; w<= maxWt; w++) dp[0][w]= val[0];

   for(int i= 1; i<n; i++)
   {
      for(int j=0; j<=maxWt; j++)
      {
         int nottake= 0+ dp[i-1][j];
         int take= INT_MIN;
         if(wt[i]<= j) take= val[i]+ dp[i-1][j-wt[i]];
         dp[i][j]= max(take, nottake);
      }
   }
   return dp[n-1][maxWt];
}

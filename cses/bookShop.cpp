// #include <iostream>
// #include <stdlib.h> 
#include <bits/stdc++.h>


using namespace std; 

int main(){

  int n,x; 
  cin >> n >> x; 
  vector<int> prices(n, 0);
  vector<int> pages(n,0); 

  for(int i = 0; i < n; i++){
    int a; cin >> a; 
    prices[i] = a;
  }

  for(int i = 0; i < n; i++){
    int a; cin >> a; 
    pages[i] = a;
  }


  vector<vector<int>> dp(n+1, vector<int> (x + 1,0));

  for(int i = 1; i <= n; i++){
    for(int k = 1; k <= x; k++){
      
      int cb = i-1;
      int other = 0;
      if(prices[cb] <= k){ 
        other = dp[i-1][k - prices[cb]] + pages[cb];
      }

      dp[i][k] = max(dp[i-1][k], other);
    }
  }
  
  cout << dp[n][x] << endl;


  

  

}

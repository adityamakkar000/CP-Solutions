#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long


int32_t main(){

  int n, k; cin >> n >> k; 
  vector<int> prefix_sum(n+1); 
  prefix_sum[0] = 0; 
  for(int i = 0; i < n; i++){ 
	  int a; cin >> a; 
	  prefix_sum[i+1]=prefix_sum[i] + a;
	  
	}
  //for(int i: prefix_sum){ 
///	  cout << i << " "; 
  //} 
//  cout << endl; 
  int ans = 0; 
  int left = 0, right = 0; 
  while(right < n+1){
	  int sum = prefix_sum[right] - prefix_sum[left]; 
	  if(sum <= k) {
		  if(sum == k) ans++;  
		  right++; 
	  } 
	  if(sum > k){
		  left++; 
	  } 
  } 
  cout << ans << endl; 
} 

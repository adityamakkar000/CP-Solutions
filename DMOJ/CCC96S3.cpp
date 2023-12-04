

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long



void solve(){
  int n,k; cin >> n >> k;

  string a = "";

  for(int i = 0; i < n; i++){
    if(k > 0){
      a += "1";
      k--;
    } else{
      a += "0";
    }
  }


  vector<string> v;

reverse(a.begin(), a.end());

  do{
    v.push_back(a);
  }while(next_permutation(a.begin(), a.end()));

  cout << "The bit patterns are\n";
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for(string i: v){
    cout << i << "\n";
  }
  cout << "\n";

}



int32_t main(){

  int t; cin >> t;
  while(t--){
    solve();
  }
}

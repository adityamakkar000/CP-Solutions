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


int32_t main(){

  freopen("angry.in", "r", stdin);
  freopen("angry.out", "w", stdout);

  int n; cin >> n;

  vector<int> b;

  for(int i = 0; i < n; i++){
    int a; cin >> a;
    b.push_back(a);
  }

  vector<int> diffs;
  sort(b.begin(), b.end());

  for(int i = 1; i < n; i++){
    diffs.push_back(b[i] - b[i-1]);
  }
  int m = 0;

  for(int i = 0; i < diffs.size(); i++){
    int p = diffs[i];
    if(p == 1){
      int c = 1;
      for(int j = i+1; j < diffs.size(); j++){
        if(diffs[j] <= p){
          p -= diffs[j];
          c++;
        }
        else{
          break;
        }
      }
      p = 1;
      for(int j = i-1; j >= 0; j--){
        if(diffs[j] <= p+1){
          p += 1;
          c++;
        }
        else{
          break;
        }
      }
      m = max(m,c);
    }
  }


  cout << m << endl;

}

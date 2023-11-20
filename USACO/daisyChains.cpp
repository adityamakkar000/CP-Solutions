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

double  average(vector<int> v){
  double ans = 0;
  for(int i: v){
    ans += i;
  }
  ans = (ans*1.0)/(v.size()*1.0);
  return ans;
}

int32_t main(){

  // freopen("pails.in","r",stdin);
  // freopen("pails.out", "w", stdout);

  int n; cin >> n;
  vector<int> flowers;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    flowers.push_back(a);
  }

  int count = 0;

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j <= n; j++){
      vector<int> photo(flowers.begin() + i, flowers.begin() + j);
      double ans  = average(photo);
      for(int k: photo){
        if(k == ans){
          count++;
          break;
        }
      }
    }
  }
  cout << count << endl;
}

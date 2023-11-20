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

  freopen("diamond.in","r",stdin);
  freopen("diamond.out", "w", stdout);

 int n, k; cin >> n >> k;
 vector<int> d;
 for(int i = 0; i < n; i++){
    int a; cin >> a;
    d.push_back(a);
 }

 sort(d.begin(),d.end());

 int c = 1;

 for(int i  = 0; i < n; i++){
  int m = d[i] + k;
  int count = 1;
  for(int j = i + 1; j < n; j++){

    if(d[j] > m){
      break;
    } else {
      count++;
      c = max(c,count);
    }
  }
 }
 cout << c << endl;



}

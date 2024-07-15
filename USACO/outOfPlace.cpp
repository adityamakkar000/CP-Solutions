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

bool c(string a){
  int arr[26] = {0};
  for(char i: a){
    arr[i-'A']++;
  }
  for(int i: arr){
    cout << i << endl;
    if(i  == 1){
      return true;
    }
  }
  return false;

}

int32_t main(){
  // freopen("hps.in","r",stdin);
  // freopen("hps.out", "w", stdout);

  int n; cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v.push_back(a);
  }

  bool check = false;

  while(!check){
    int prev = v[0];
    for(int i = 1; i < n; i++){
      if(v[i] < prev){
        int temp = v[i];
        for(int j = 0; j < n; j++){
          if(v[j] <= v[)
        }
      } else {
        prev = v[i];
      }
    }
  }

}



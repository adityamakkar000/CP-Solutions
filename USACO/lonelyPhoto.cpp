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
  cin.ignore();
  string a;
  getline(cin,a);
  int ans = 0;
  for(int j = 3; j < n; j++ ){
    for(int i = 0; i < n-j+1; i++){
      string b = a.substr(i,j);
      bool check = c(b);
      cout << endl;
      cout << endl; 
      if(check)ans++;
    }
  }
  cout << ans << endl;
}



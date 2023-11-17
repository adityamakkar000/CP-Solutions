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

  int n; cin >> n;
  vector<int> o;
  o.push_back(n);
  while(n != 1){
    if(n % 2 == 0) {
      n /= 2;
    }
    else{
      n = n*3 + 1;
    }
    o.push_back(n);
  }

  for(int i: o){
    cout << i << " "; 
  }



}

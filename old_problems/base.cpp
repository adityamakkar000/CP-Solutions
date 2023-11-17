#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long


int32_t main(){

  int n, y; cin >> n >> y;

  string s = "";
  while(n > 0){
    s += to_string(n%y);
    n /= y;
  }

  reverse(s.begin(), s.end());

  int count = 0;
  for(char i: s){
    if(i == '1') count++;
  }

  if(count % 2 == 0) cout << "Winnie" << endl;
  else cout << "Modo" << endl;
}

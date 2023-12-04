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

  string a; cin >> a;

  string b = "";

  for(char i: a){
    char c;
    if(isupper(i)){
       c = (i - 'A' + 22) % 26 + 'A';
    } else{
       c = (i- 'a' + 22) % 26 + 'a';
    }
    b += c;

  }
  string ans = "";
  for(int i = 5; i < 5 + a.length(); i++){
    ans += b[i%b.length()];
  }
  cout << ans;

}

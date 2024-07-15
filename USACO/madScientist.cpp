#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long int

int32_t main(){

  freopen("breedflip.in","r",stdin);
  freopen("breedflip.out", "w", stdout);

  int n; cin >> n;
  string a,b; cin >> a >> b;

  bool check = false;
  int c = 0;
  for(int i = 0; i  < n; i++){
    char temp = a[i];
    if(b[i] == a[i] && check){
      check = false;
      c++;
    }

    if(b[i] != a[i]) {
      check = true;
    }
  }

  if(check){
    c++;
  }
cout << c<< endl;
}

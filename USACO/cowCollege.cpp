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


int32_t main()
{

  freopen("cowqueue.in", "r", stdin);
  freopen("cowqueue.out", "w", stdout);

  int n; cin >> n;
  vector<int> cow;

  for(int i = 0; i < n; i++){
    int a; cin >> a;
    cow.push_back(a);
  }

sort(cow.begin(),cow.end());

int price = 0;
int p = 0;
int profit = 0;

for(int i = 0; i < n; i++){
  p = cow[i];
  if((n-i)*p > profit){
    profit  = (n-i)*p;
    price = p;
  }
}

cout << profit << " " << price << endl;

}

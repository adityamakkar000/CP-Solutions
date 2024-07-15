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

int solve(int even, int odd){

  if(even > odd){
    return odd + 2;
  }

  else if(odd > even){
    while(even < odd){
      odd -=2;
      even += 1;
    }
    return even;
  }

  else return even;
}


int32_t main(){

  // freopen("breedflip.in","r",stdin);
  // freopen("breedflip.out", "w", stdout);

  int n; cin >> n;
  vector<int> v;

  int odd = 0, even = 0;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    if(a % 2 == 0) even++;
    else odd++;
    v.push_back(a);
  }

  int ans = solve(even,odd);
  cout << ans << endl;

}

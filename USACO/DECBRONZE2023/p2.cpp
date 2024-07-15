#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long int

int32_t main(){
  int n;
  cin >> n;
  cin.ignore();
  string a;
  getline(cin, a);
  vector<bool> b(n);
  for(int i = 0; i < n; i++){
    char c = a[i];
    if(c == '1'){
      b[i] = true;
    }
    else{
      b[i] = false;
    }
  }

  vector<int> conseutive_ones;
  bool last = false;
  int minimum = INT64_MAX;
  int count = 0;
  for(int i = 0; i < n; i++){
    if(b[i] == true && !last){
      count++;
      last = true;
    }
    else if(b[i] == true && last){
      count++;
    }
    else if(b[i] == false && last){
      conseutive_ones.push_back(count);
      minimum = min(minimum, count);
      count = 0;
      last = false;
    }
  }

  if(last){
    conseutive_ones.push_back(count);
    minimum = min(minimum, count);
  }

  bool c = false;
  int ans = 0;
  int times = ceil((double)(minimum-1)/2);


  for(int i = 0; i < conseutive_ones.size(); i++){
    if(times -1 >= 0)conseutive_ones[i] = ceil((conseutive_ones[i] - 2*(times-1))/3.0);
  }
  for(int i = 0; i < conseutive_ones.size(); i++){
    ans += conseutive_ones[i];
  }

  cout << ans << endl;
}

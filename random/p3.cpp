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


bool c(vector<int> n, vector<vector<int>> p){
  for(auto k: p){
    bool check = true;
    for(int i = 0; i < 5; i++){
      if(k[i] != n[i]) check = false;
    }
    if(check) return true;
  }
  return false;
}


int32_t main(){

  vector<int> n;
  for(int i = 0; i < 5; i++){
    int a; cin >> a;
    n.push_back(a);
  }
  double  average = 0;
  for(int i: n){
    average+= i;
  }
  average /= 5;
  // cout << average << endl;

  vector<vector<int>> p;

  p.push_back(n);
  bool check = false;
  int turns = 0;
  while(!check){
    turns++;
    for(int i = 0; i < 5; i++){

      if((double)n[i] > average){
        // cout << i << " " << n[i] << " " << average << endl;
        n[i] = n[i] - 4;
        // cout << n[i];
        for(int k = 0; k < 5; k++){
          if(k != i){
            n[k] = n[k] + 1;
          }
        }

        for(int j = 0; j < 5; j++){
          cout << n[j] << " ";
        }
        cout << endl;
      }

    }

      // cout << endl;

    // for(int i = 0; i < 5; i++){
    //   cout << n[i] << " ";
    // }
    // cout << endl;

    check = c(n, p);
    if(check){
      cout << turns << endl;
      break;
    }
    else p.push_back(n);
  }

}

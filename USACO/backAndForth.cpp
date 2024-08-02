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

set<int> ending_day;


void search(int day, int barn1, vector<int> bucket1, int barn2, vector<int> bucket2){

  if(day == 4){
    ending_day.insert(barn1);
    return;
  }

  for(int i = 0; i < bucket1.size();  i++){

    vector<int> new_bucket1 = bucket1;
    new_bucket1.erase(next(new_bucket1.begin(), i));
    vector<int> new_bucket2 = bucket2;
    new_bucket2.push_back(bucket1[i]);


    search(day + 1, barn2 + bucket1[i], new_bucket2, barn1 - bucket1[i], new_bucket1);
  }

}

int32_t main(){
  freopen("backforth.in","r",stdin);
  freopen("backforth.out", "w", stdout);

  vector<int> bucket1(10);
  vector<int> bucket2(10);

  for(int &i: bucket1){
    cin >> i;
  }
  for(int &i: bucket2){
    cin >> i;
  }

  search(0, 1000, bucket1, 1000, bucket2);

  cout << ending_day.size() << endl;

}
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

  string n; cin >> n;
  vector<char> p(n.begin(),n.end());
  sort(p.begin(), p.end());

  vector<string> ans;
  int count = 0;

  do{
    string a = "";
    for(char i: p){
      a = a + i;
    }
    ans.push_back(a);
    count++;

  } while(next_permutation(p.begin(),p.end()));

  cout << ans.size() << endl;
  for(string i: ans){
    cout << i << endl;
  }

}

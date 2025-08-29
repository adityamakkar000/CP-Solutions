#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>

using namespace std;

#define MAXN 202020
#define MOD 1000000007


int32_t main(){

  int n,m,k; cin >> n >> m >> k;

  vector < vector<int> > v(n, vector<int> (m,0));
  vector< tuple<int,int,int> > q;


  int arr[10001] = {5001};


  for(int i = 0; i < k; i++){
    int a,b,c; cin >> a >> b >> c;
    b--;


    if (a == 1){
      arr[b] = i;
    }
    else if(a == 2){
      arr[b + 5000] = i;
    }


    q.push_back(make_tuple(a,b,c));

  }

  int start_index = 5001;

  for(int i: arr){
    start_index = min(i, start_index);
  }

  for(int i = start_index; i < k; i++){

    tuple<int,int,int> ct = q[i];

    int a = get<0>(ct);
    int b = get<1>(ct);
    int c = get<2>(ct);

    if(a == 1){
      if(i != arr[b]){
        break;
      }
      for(int k = 0; k < m; k++){
        v[b][k] = c;
      }

    }

    if(a == 2){
      if(i != arr[b + 5000]){
        break;
      }
      for(int k = 0; k < n; k++){
        v[k][b] = c;
      }
    }

  }

  for(auto i: v){
    for(int k: i) cout << k << " ";
    cout << "\n";
  }

}

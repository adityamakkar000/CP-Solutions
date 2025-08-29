
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <map>
#include <set>
// #include <bits/stdc++.h>

typedef uint64_t ll;
using namespace std;

#define BASE ((ll)(pow(10,9)) + 7)


template <typename T> void inp(vector<T> &v){
    for(T& i: v){
        cin >> i;
    }
}
template <typename T> void print_vec(vector<T> &v){
    for(const T i: v){
        cout << i << " ";
    }
    cout << endl;
}

void solve(){
  ll n, k; 
  cin >> n >> k; 

  vector<ll> v(n); 
  for(ll  &i: v){ 
    cin >> i;
  }

  if(k % 2 == 1){ 
    for(ll &i: v){ 
      if (i % 2 != 0){
        i += k;
      }
    }
    print_vec(v);
    return;
  }
  else{
    ll mod = 0;
    if (k == 2) 
    {
        for(ll &i: v){

            if(i % 3 == 1){
                i += k;
            }
            else if (i % 3 == 2){
                i += 2 * k;
            }
        }
        print_vec(v);
        return;

    }
    else {
        mod = k - 1;
        for(ll &i: v){
          ll base = i % mod; 
          ll adds = (mod - base) % mod;
          i += adds * k;
        }
        print_vec(v);
        return;
    }
  }


}


int main(){
  int t;
  cin >> t;
  while(t--) solve();

}

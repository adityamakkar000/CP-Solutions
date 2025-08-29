#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <map>
#include <set>
// #include <bits/stdc++.h>

typedef long long ll;
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

    int n,a,b;
    cin >> n >> a >> b; 

    bool a_even = a % 2 == 0; 
    bool b_even = b % 2 == 0;
    if (n % 2 == 0){

        if((b_even && a_even) || (b_even && b > a)){
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;
        return;

        

    }
    else{

        if((!b_even && !a_even) || (!b_even && b > a)){
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;
        return;

    }


}

int32_t main(){
    int t; cin >> t;
    while(t--) {
        solve(); 
    }
    return 0;
}

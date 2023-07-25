#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void solve(){

    string a; cin >> a;
    int l = a.size();
    char b = a[0]; int p = 0;
    string o = "";

    for(int i = 0; i < l; i++){

        if(a[i]!= b){

            o = o + to_string(p) + " " + b + " ";
            b = a[i];
            p = 1;
        }

        else if(a[i] == b){

            p++;
        }

    }
    o = o + to_string(p) + " " + b;

    cout << o << endl;

}

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){

        solve();
    }



}

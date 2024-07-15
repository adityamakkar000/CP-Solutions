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


typedef vector<long long> vInt;

int main(){

    int m, n; cin >> m >> n;

    int c[n]= {0},r[m] = {0};

    int k; cin >> k;

    for(int i = 0; i < k; i++){

        char a; cin >> a;
        int b; cin >> b; b--;

        if(a == 'R'){

            r[b]++;
        }
        else if(a == 'C'){

            c[b]++;
        }
    }
    int colums = 0, rows = 0;
    for(int i = 0; i < m; i++){

        if(r[i] % 2 == 1){

            colums++;
        }
    }

    for(int i = 0; i < n;i++){

        if(c[i] % 2 == 1){

            rows++;
        }
    }

    int sum = colums*n+rows*m-(2*colums*rows);

    cout << sum;

}

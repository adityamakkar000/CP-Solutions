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


int main(){

    int n; cin >> n;

    vector <int> measurements;

    for(int i = 0; i < n; i++){

        int a; cin >> a;
        measurements.push_back(a);
    }

    sort(measurements.begin(),measurements.end());

    vector <int> orginal;


    if(n % 2 == 1){

        orginal.push_back(measurements[0]);
        measurements.erase(measurements.begin());
        n = measurements.size();

        for(int i = 0; i < n/2;i++){

            orginal.push_back(measurements[n-i-1]);
            orginal.push_back(measurements[i]);
        }

        reverse(orginal.begin(),orginal.end());

        for(int i: orginal){

            cout << i << " ";
        }
    }

    else{




        for(int i = 0; i < n/2;i++){

            orginal.push_back(measurements[n-i-1]);
            orginal.push_back(measurements[i]);
        }
        reverse(orginal.begin(),orginal.end());
        for(int i: orginal){

            cout << i << " ";
        }
    }

}

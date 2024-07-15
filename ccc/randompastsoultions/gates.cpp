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

    int g; cin >> g;
    int p; cin >> p;

    set<int> airports;

    for(int i = 1; i <= g; i++){

        airports.insert(i);
    }

    int c = 0;

    for(int i = 0; i < p; i++){

        int a; cin >> a;

        if(airports.empty()){

            break;
        }

        else if(a < *airports.begin()){

            break;
        }
        else{

            c++;
            airports.erase(prev(airports.upper_bound(a)));
        }
    }

    cout << c;




}

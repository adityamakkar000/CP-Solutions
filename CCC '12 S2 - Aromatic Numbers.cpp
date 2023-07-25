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


int value (string a, map<char,int> m){

    int value = (a[0]-'0')*m[a[1]];
    return value;
}

int main(){

    string a; cin >> a;

    vector <string> subs;

    map <char, int> roman;

    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    for(int i = 2; i <= a.size(); i += 2){

        string b = a.substr(i-2,2);
        subs.push_back(b);
    }
    int total = 0;

    for(int i = 0; i < subs.size();i++){

        bool check = false;

        if(i != subs.size() - 1){

            if(roman[subs[i][1]] < roman[subs[i+1][1]]){

                check = true;
            }
        }

        if(check){

            total -= value(subs[i],roman);
        }

        else{

            total += value(subs[i],roman);
        }

    }

    cout << total;

}

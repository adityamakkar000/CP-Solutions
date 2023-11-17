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

    vector <int> bookeeping (2000000,0);

    int note = 0;

    for(int i = 0; i < n; i++){

        int a; cin >> a;

        if(a > note){

            note = a;
        }

        bookeeping[a]++;
    }

    vector<int> m;
    vector <int> s;

    int ma = 0, sa = 0;

    for(int i = 0; i <= note; i++){

        if(bookeeping[i] >= ma){

            ma = bookeeping[i];

        }

        else if(bookeeping[i] >= sa){

            sa = bookeeping[i];
        }

    }

    for(int i = 0; i <= note; i++){

        if(bookeeping[i] == ma){

            m.push_back(i);
        }

        else if(bookeeping[i] == sa){

            s.push_back(i);
        }
    }

    sort(m.begin(),m.end());
    sort(s.begin(),s.end());

    if(m.size() > 1){
        cout << m[m.size()-1] - m[0];
    }
    else{

        int total = 0;

        for(int i = 0; i < s.size();i++){

            total = max(total, abs(m[0] - s[i]));
        }

        cout << total;
    }


}

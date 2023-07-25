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


int sum(vector <int> v, int p){

    int s = 0;

    for(int i = p; i >= 0; i--){

        s += v[i];
    }
    return s;
}

int w(vector <int> v, int i){

    int sum = v[i] + v[i+1] + v[i+2] + v[i+3];
    return sum;
}

int special(vector <int> v,int W,int o){

    if(sum(v,o) > W){

        return special(v,W,o-1);
    }

    return o+1;

}


int main(){

    int W; cin >> W;
    int N; cin >> N;

    vector <int> cars;

    for(int i = 0; i < N; i++){

        int a; cin >> a;
        cars.push_back(a);
    }

    int p = 0;

    for(int i = 0; i < N-3; i++){

        int weight = w(cars,i);


        if(weight > W){

            break;
        }

        p = i+4;
    }

    if(p == 0){

        int s = special(cars, W,2);
        p = s;

    }

    cout << p;

}

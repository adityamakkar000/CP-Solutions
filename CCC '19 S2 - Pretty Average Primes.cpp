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


bool isprime(int n){

    for(int i = 2; i < sqrt(n)+1; i++){

        if(n % i == 0){

            return false;
        }
    }

    return true;


}


int main(){

    int T; cin >> T;
    vector <int> v;

    for(int i = 0; i < T; i++){

        int N; cin >> N;
        v.push_back(N);
    }

    for(int N: v){

        for(int k = 2; k < 2*N; k++){

            bool checker = false;
            int a = k;
            int b = 2*N-k;

            if(isprime(a)){

                if(isprime(b)){

                    cout << a << " " << b << endl;
                    checker = true;
                }
            }

            if(checker){

                break;
            }


        }

    }




}

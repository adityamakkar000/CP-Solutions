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

int count_digit(int number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
   }
   return count;
}

bool digits(int n){

    int l = count_digit(n);
    vector <int> d;

    for(int i = 1; i <= l;i++){

        int ten = pow(10,i);
        int difference = (n % ten)/(ten/10);

        d.push_back(difference);
    }

    int arr[10] = {0};

    for(int i: d){

        arr[i] += 1;
    }

    for(int i = 0; i < 10; i++){

        if(arr[i] > 1){

            return false;
        }
    }

    return true;




}

int main(){

    string n; cin >> n;
    int p = stoi(n);


    bool check = false;
    int i = p;

    while(check == false){

        i++;

        check = digits(i);

    }
    cout << i;

}

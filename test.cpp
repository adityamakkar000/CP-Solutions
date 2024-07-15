
#include <bits/stdc++.h>

using namespace std;

#define int 

void swap1(int *x, int *y){
  int temp = *x;
   *x = *y;
   *y = temp;
}

void test2(int &x){
  x = 6;
}

int main(){

  int x = 5;
  int y = 6;
  cout << x << " " << y << endl;
  ptr i = &x;
  swap(i*&y);
  cout << x << " " << y << endl;





}

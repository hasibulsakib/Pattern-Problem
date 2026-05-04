/*
5
    A
   AB
  ABC
 ABCD
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout << " ";

        }
        for(int c=1;c<=r;c++){
            cout <<char(c+64);
        }
        cout << endl;
    }
}
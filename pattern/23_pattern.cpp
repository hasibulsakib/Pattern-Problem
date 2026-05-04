/*
5

ABCDE
 ABCD
  ABC
   AB
    A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int r=n;r>=1;r--){
        for(int c=1;c<=n-r;c++){
            cout << " ";
        }
        for(int c=1;c<=r;c++){
            cout << char(c+64);
        }
        cout << endl;
    }
}
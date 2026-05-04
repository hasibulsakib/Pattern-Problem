/*
5

A 
B B 
C C C 
D D D D 
E E E E E 
d d d d 
c c c 
b b 
a
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout << char(r+64) <<" ";
        }
        cout << endl;
    }
    for(int r=n-1;r>=1;r--){
        for(int c=1;c<=r;c++){
            cout << char(r+96) << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
5
e e e e e 
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
    for(int i=n;i>=1;i--){
        for(int j=1; j<=i;j++){
            cout << char(i+96) << " ";
        }
        cout << endl;
    }
}
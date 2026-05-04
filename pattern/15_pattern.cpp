/*
3

1 
1 2 
1 2 3 
1 2 
1 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout << c << " ";
        }
        cout << endl;
    }
    for(int r=n-1;r>=1;r--){
        for(int c=1;c<=r;c++){
            cout << c <<" ";
        }
        cout << endl;
    }
    return 0;
}
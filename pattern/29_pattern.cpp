/*
5

1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout << r*c << " ";

        }
        cout << endl;
    }
}
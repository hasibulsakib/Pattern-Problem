/*
5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout << r <<" ";
        }
        cout << endl;
    }
    for(int r=n-1;r>=1;r--){
        for(int c=1;c<=r;c++){
            cout << r << " ";
        }
        cout << endl;
    }
    return 0;
}
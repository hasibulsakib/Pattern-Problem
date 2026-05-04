/*
5
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
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
            cout << c ;
        }
        cout << endl;
    }

    for(int r=n-1;r>=1;r--){
        for(int c=1;c<=n-r;c++){
            cout << " ";
        }
        for(int c=1;c<=r;c++){
            cout << c;
        }
        cout << endl;
    }

}
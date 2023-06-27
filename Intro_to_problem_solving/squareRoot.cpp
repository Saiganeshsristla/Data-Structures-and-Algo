#include<bits/stdc++.h>
using namespace std;

int getsqrt(int A){
    for(int i=0; i<A; i++){
        if(i*i == A){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    cout << getsqrt(n);

    return 0;
}
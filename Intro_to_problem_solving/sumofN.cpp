#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    cout << sumOfN(n);

    return 0;
}
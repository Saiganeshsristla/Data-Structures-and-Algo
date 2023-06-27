#include<bits/stdc++.h>
using namespace std;

void printArmstrong(int n){
    int temp = n;

    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum += (digit * digit * digit);
        n /= 10;
    }
    if(sum == temp){
        cout << temp << endl;
    }
}

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        printArmstrong(i);
    }

    return 0;
}
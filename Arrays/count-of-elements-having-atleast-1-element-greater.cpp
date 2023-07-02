#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n){
    int arrayMax = arr[0];
    int count = 1;

    for(int i=1; i<n; i++){
        if(arr[i] > arrayMax){
            arrayMax = arr[i];
            count = 1;
        }
        else if(arr[i] == arrayMax){
            count++;
        }
    }
    return n - count;
}

int main(){
    int arr[7] = {-3, -2, 6, 8, 4, 8, 5};

    cout << count(arr, 7);

    return 0;
}
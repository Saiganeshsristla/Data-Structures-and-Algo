#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int L, int R){
    int i = L;
    int j = R;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;
}


void rotateArray(int arr[], int n, int k){3
    if(k >= n){
        k = k % n;
    }

    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
}

int main(){
    int arr[5] = {2, 4, 1, 8, 5};
    int k;
    cout << "Enter k: ";
    cin >> k;

    printArray(arr, 5);
    rotateArray(arr, 5, k);
    printArray(arr, 5);

    return 0;
}
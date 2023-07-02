#include<bits/stdc++.h>
using namespace std;



void reverseArray(int arr[], int n){
    int i = 0;
    int j = n - 1;
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

int main(){
    int A[6] = {3, 5, 2, 8, 4, 9};

    printArray(A, 6);
    reverseArray(A, 6);
    printArray(A, 6);


    return 0;
}
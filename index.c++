#include <iostream>

using namespace std;
void inputArr(int a[], int n){
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
int maxSum(int a[], int n){
    int min = a[0];
    int index = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if(min > a[i]){
            index = i;
        }
    }
    for(int i = index; i< n -1 ; i++){
        a[i] = a[i+1];
    }
    for (int i = 0; i < n-1; i++) {
       sum = a[i] + sum;
    }
    return sum;
}
int minSum(int a[], int n){
    int min = a[0];
    int index = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if(min < a[i]){
            index = i;
        }
    }
    for(int i = index; i< n -1 ; i++){
        a[i] = a[i+1];
    }
    for (int i = 0; i < n-1; i++) {
       sum = a[i] + sum;
    }
    return sum;
}
int main()
{
    int arr[100];
    int n = 5;
    inputArr(arr, n);
    cout << minSum(arr, n);
    cout << " ";
    cout << maxSum(arr,n);
    return 0;
}
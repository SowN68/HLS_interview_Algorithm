#include <iostream>

using namespace std;
void inputArr(int a[], int n){
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void sortArray(int a[], int n){
     int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = a[i]; 
        j = i - 1; 
  

        while (j >= 0 && a[j] > key)
        { 
            a[j + 1] = a[j]; 
            j = j - 1; 
        } 
        a[j + 1] = key; 
    } 
}
int maxSum(int a[], int n){
    int index = 0;
    int sum = 0;
    for(int i = index; i< n - 1 ; i++){
        a[i] = a[i+1];
        sum = a[i]+ sum;
    }
    n--;
    return sum;
}
int minSum(int a[], int n){
    int index = n -1;
    int sum = 0;
    for(int i = index; i< n - 1; i++){
        a[i] = a[i+1];
        
    }
    n--;
    for(int i = 0; i< n; i++){
        sum += a[i];
        
    }
    
    return sum;
}
int main()
{
    int arr[100];
    int n =5;
    inputArr(arr, n);
    sortArray(arr, n);

    cout<< minSum(arr,n);
    cout << " ";
    cout<<maxSum(arr,n);
   
    

    return 0;
}
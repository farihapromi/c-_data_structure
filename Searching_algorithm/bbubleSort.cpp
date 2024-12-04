
#include <bits/stdc++.h>
using namespace std;
 void bubbleSort(int arr[],int n){
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
     }
 }

 void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
 }

 int main(){
     int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; // Assuming a maximum array size of 100
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);


 }

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n); //declarataion

int main(){
int n;
cin>>n;
int arr[n];
int i;
for(i=0;i<n;i++){
    cin>>arr[i];
}
// i=0, j=0, j<6-1-0
bubbleSort(arr, n); //invoke


for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;



return 0;}
//definition
void bubbleSort(int arr[], int n){
    int i, j, tmp;
for(i=0;i<n;i++){
    for(j=1;j<n-i;j++){
       if(arr[j-1]>arr[j]){
        tmp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = tmp;
       }
    }
}
}

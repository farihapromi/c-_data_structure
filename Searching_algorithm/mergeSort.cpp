#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int p,int q,int r){

    int n1=q-p+1;
    int n2=r-q;
    int l[n1];
    int m[n2];

    for(int i=0;i<n1;i++){
        l[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++){
        m[j]=arr[q+1+j];
    }

    int i,j,k;
    i=0;
    j=0;
    k=p;
    while(i<n1&& j<n2){
        if(l[i]<=m[j]){
            arr[k]=l[i];
            i++;
        }
        else
        {

            arr[k]=m[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=m[j];
        j++;
        k++;
    }
}
 void mergesort(int arr[],int p,int r){

 if(p<r){
   int q=(p+r)/2;
    mergesort(arr,p,q);
    mergesort(arr,q+1,r);
    merge(arr,p,q,r);
 }


 }
 void printarray(int arr[],int n){
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
 }

 }
int main() {
    int n;
    int arr[100];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array items: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: " << endl;
    printarray(arr, n);

    return 0;
}


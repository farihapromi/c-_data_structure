
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int r,int x){

while(l<=r){
    int mid=(l+r)/2;
    if(arr[mid]==x)
       {
           return mid;

       }
       else if(arr[mid]<x){
        l=mid+1;
       }else{
       r=mid-1;
       }


}
return -1;
}


int main(){
    int n,i,x;
    cin>>n;
    int arr[10];
    for(i=0;i<n;i++){
       cin>>arr[i] ;
    }
    cout<<"enter target"<<endl;
    cin>>x;
     int result=binarySearch(arr,0,n-1,x);
     if(result==-1){
        cout<<"Missing value"<<endl;
     }
     else
        cout<<"value is present"<<result<<endl;


    return 0;
}

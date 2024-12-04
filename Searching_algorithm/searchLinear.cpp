#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int N,int x){
int i,n;
for(i=0;i<n;i++){
    if(arr[i]==x)
        return i;}

        return -1;


}
int main(){

int n,i;
int arr[10];
cout<<"enter number of number"<<endl;
cin>>n;
cout<<"enter the array elements"<<endl;
for(i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter the key"<<endl;
int x;
cin>>x;
int result=search(arr,n,x);
if(result==-1)
   {
       cout<<"array element not present"<<endl;

   }
else
    cout<<"array element present"<<result;
return 0;

}

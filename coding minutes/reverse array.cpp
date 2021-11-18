#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int l=0,r=n-1;
    while(l<r){
        int temp=arr[r];
        arr[r]=arr[l];
        arr[l]=temp;
        l++;
        r--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n); //we are passing base address
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

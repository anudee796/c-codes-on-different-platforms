#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return -1;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int d=binary(a,n,3);//we are passing array name base address
    if(d==-1){
        cout<<"ele is not thre";
    }else{
        cout<<"ele is found at "<<d+1<<" position"<<endl;
    }
}

#include<iostream>
using namespace std;
void print(int arr[],int n){
    arr[0]=2;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);//we are passing address arrsy name gives base address
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

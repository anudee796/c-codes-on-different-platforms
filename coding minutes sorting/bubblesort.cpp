#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    int swap=0;
for(int i=0;i<n;i++){
    swap=0;
    for(int j=i;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swap++;
        }
    }
    if(swap==0){
        break;
    }
}
    
}
int main()
{
    int arr[]={34,1,2,4,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

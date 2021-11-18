#include<iostream>
using namespace std;
void printsubarray(int arr[],int n){
    int currsum=0;
    int maxsum=0;
    int l,r;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currsum=0;
            for(int k=i;k<=j;k++){
            currsum=currsum+arr[k];    
            }
            if(currsum>maxsum){
                maxsum=currsum;
                l=i;
                r=j;
            }
        }
    }
    cout<<"sum is : "<<maxsum<<endl;
    cout<<"elements:"<<endl;
    for(int k=l;k<=r;k++){
        cout<<arr[k]<<",";
    }
}
int main(){
    int arr[]={1,2,3};
    printsubarray(arr,3);
}

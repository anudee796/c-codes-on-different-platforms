#include<iostream>
using namespace std;
void print(int arr[]){
    int n=sizeof(arr);     //size of pointer is 8bytes
    cout<<"size in print function :"<<n;
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr);
    cout<<"size in main :"<<n<<endl;
    print(arr); //we are passing address
}

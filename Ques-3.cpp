#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,8,6,7,5,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = -1;
    int idx1 = -1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(idx==-1){
                idx = i;
                idx1 = i+1;
            }
            else idx1 = i+1;
        }
    }
    swap(arr[idx],arr[idx1]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

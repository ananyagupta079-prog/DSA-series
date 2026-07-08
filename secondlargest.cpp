// Brute Force Approach
#include<iostream>
using namespace std;
void brute(int arr[],int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int sl=-1;
    int largest=n-1;
    for(int i=n-2;i>0;i--){
        if(arr[i]!=largest){
            sl=arr[i];
            break;
        }
    }
    cout<<sl<<endl;
}
// Better Approach
void better(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>sl && arr[i]!=max){
            sl=arr[i];
        }
    }
    cout<<sl<<endl;
}
// Optimized Approach
void optimized(int arr[],int n){
    int l=arr[0],sl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]!=l){
            sl=arr[i];
        }
    }
    cout<<sl<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n);
    better(arr,n);
    optimized(arr,n);
    return 0;
}
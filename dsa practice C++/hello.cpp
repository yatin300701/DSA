#include<iostream>
using namespace std;
int* Rearrange(int *arr,int n);
int main(){
    int t;
    cout<<"type t"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"type n \n";
        cin>>n;
        int a[n];
        cout<<"type array \n";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int *b=Rearrange(a,n);
        for(int i=0;i<n;i++){
            cout<<b[i]<<endl;
        }
    }
}


int*  Rearrange(int *arr,int n){
    // Complete the function
    int solArray[n];
    for(int i=0;i<n;i++){
        solArray[i]=-1;
    }
    for(int i=0;i<n;i++){
        int p=arr[i];
        if(p>0){
        solArray[p-1]=p;
        }
    }
//     for(int i=0;i<n;i++){
//            cout<<solArray[i]<<endl;
//        }
    return solArray;
}

#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<< " ";
    }cout << endl;

    }
void PrintArray2(int arr2[],int u){
    for(int i=0;i<u;i++){
        cout<<arr2[i]<< " ";
        

    }
    cout << endl;
    
    
}

void SwapAlternate_Even(int arr1[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr1[i], arr1[i+1]);
        }
    }
}
void SwapAlternate_Odd(int arr2[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr2[i], arr2[i+1]);
        }
    }
}

int main(){
    
    int n, u;
    cout <<"enter value of  even array: "<<endl;
    cin >> n;
    int arr1[n];
    for(int i=0; i<n;i++){
        cin >> arr1[i];
    }
    cout <<"enter value of odd array: " <<endl;
    cin>> u;
    int arr2[u];
    for(int j=0;j<u;j++){
        cin >> arr2[j];
    }
    
    
    
    
    SwapAlternate_Even(arr1,n);
    SwapAlternate_Odd(arr2,u);
    PrintArray(arr1,n);
    PrintArray2(arr2,u);
    
    
}
#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int n, int key){
    for(int i=0; i<n;i++){
        if(arr[i]== key){
            return 1;
        }
    }
}
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int key;
    cout <<" enter the search key: "<< endl;
    cin >> key;
    if(search(arr,n,key)){
        cout << "key found in array: "<< key << endl;
        
    } else {
        cout << "key not found in array: "<< key << endl;
    }

    return 0;
}
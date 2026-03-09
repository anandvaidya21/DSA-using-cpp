#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];

        int maxright = arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]>maxright){
                cout << arr[i] << " ";
                maxright = arr[i];
                cout << "maxright: " << maxright << endl;
            }
        }
    }
    return 0;

}



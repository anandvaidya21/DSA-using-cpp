// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={3,5,7,8,12,15};
//     int n= 6;
//     int target =19;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<"Pair found of 19: "<<arr[i]<< " and " << arr[j] << endl;
//                 return 0;  
//             }
//         }
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest= INT_MIN;
    int secondlargest;
    secondlargest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]> largest){
            secondlargest = largest;
            largest = arr[i];

        }
        else if( arr[i]>secondlargest && arr[i]!=largest){
            secondlargest = arr[i];
        }
        
    }
    cout << "second largest" << secondlargest << endl;

}
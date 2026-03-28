#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++)
        {
            cin >> arr[i];
        }
        int target = 6;
        int SubValue;
        for(int i=0; i<n; i++){
            if(arr[i] == target){
                arr[i] = SubValue;
            }
        }
        cout <<"The largest sum in the Array:"<<SubValue << endl;

        
        return 0;

}
        
    

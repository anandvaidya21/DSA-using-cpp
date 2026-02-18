#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count;
    cin >>n;
    string s;
    cin>> s;
    count=0;
    for(int i =0; i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            continue;
        }
    }
    cout << count;

}
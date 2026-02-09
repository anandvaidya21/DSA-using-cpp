 /*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[2];
    return 0;


    //2d array
    int arr[3][5];

    arr[1][3] = 78;
    cout << arr[1][2];
    return 0;

}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ="ANAND";
    int len = s.size();
    s[len-1] = 'z';
    cout << s[len-1];
    return 0; 
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    int total = 0;

    for(int i = 0; i < n; i++) {
        cin >> coins[i];
        total += coins[i];  
    }

   
    sort(coins.begin(), coins.end(), greater<int>());

    int current_sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        current_sum += coins[i];
        count++;

        if(current_sum > total - current_sum) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
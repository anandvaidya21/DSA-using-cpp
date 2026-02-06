#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int left = 0;
        int maxKeep = 1;

        for (int right = 0; right < n; right++) {
            while ((long long)nums[right] > (long long)nums[left] * k) {
                left++;
            }
            maxKeep = max(maxKeep, right - left + 1);
        }

        return n - maxKeep;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 6, 2, 9};
    int k = 3;

    cout << sol.minRemoval(nums, k);
    return 0;
}

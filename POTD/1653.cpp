class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> countA(n+1,0);
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                countA[i+1]=1;

            }
            countA[i+1]+=countA[i];

        }
        int mini= min(countA[n],n-countA[n]);
        for(int i=1;i<n;i++){
            int leftB = i-countA[i];
            int rightA = countA[n]-countA[i];
            mini = min(mini,leftB+rightA);
        }
        return mini;
        
        
    }
};

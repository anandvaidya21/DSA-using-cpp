class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int SecondLargest = INT_MIN;
        for( int val : nums){
            if(val > largest){
                SecondLargest = largest;
                largest = val;
            }
            else if( val > SecondLargest && val != largest){
                SecondLargest = val;
                
            }
        }
        if(SecondLargest == INT_MIN){
            return -1;
        }
        return SecondLargest;
      
    }
};

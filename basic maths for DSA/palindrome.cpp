class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int dup = x;
        int RevNum = 0;
        while(x!=0){
            int LastDigit = x % 10;
            x = x/10;
            if(RevNum > INT_MAX/10 || RevNum < INT_MIN /10)
            return 0;
            RevNum = RevNum*10 + LastDigit;

        }
        if( dup == RevNum){
            return true;
        }
        else{
            return 0;
        }
    return RevNum;
        
    }
};
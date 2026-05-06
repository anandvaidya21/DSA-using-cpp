class Solution {
public:
    bool isArmstrong(int n) {
        int dup =0;
        int sum = 0;
        int RevNum=0;
        while(n!=0){
            int LastDigit = n % 10;
            sum = sum + LastDigit *LastDigit*LastDigit ;
            n = n /10;
            if(RevNum > INT_MAX/10 || RevNum < INT_MIN /10)
            return 0;
            RevNum = RevNum * 10 + LastDigit;
        }
        if (sum == dup){
            return true;
        }
        else{
            return 0;
        }

    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int rem;
        int num =x;

        if(x<0)
        return 0;

        while (x != 0) {
            rem = x % 10;
           // if(rev>INT_MAX/10)
            //return 0;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        if(rev == num){
            return 1;
        }
        else
        {return 0;}
    }
};
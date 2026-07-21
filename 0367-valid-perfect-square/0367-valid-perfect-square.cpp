class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=1;
        while(i*i<=num){
            if(i*i==num)
            {return 1;}
           
            i++;
        }
        return 0;
    }
};
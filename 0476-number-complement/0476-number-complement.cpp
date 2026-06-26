class Solution {
public:
    int findComplement(int num) {
        long long ans=0;
        int rem;
        int i;
        long long mul=1;
        while(num!=0){
            rem=num%2;
            rem=rem^1;
            ans=rem*mul+ans;
            num=num/2;
            mul=mul*2;

        }
       return ans;
    }
};
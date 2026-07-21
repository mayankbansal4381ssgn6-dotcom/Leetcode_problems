class Solution {
public:
    int bitwiseComplement(int n) {
        int ans =0;
        int rem;
        int mul=1;
        if(n==0){
        return 1;}
        while(n){
            rem=n%2;
            rem=rem^1;
            n=n/2;
            ans=rem*mul+ans;
            mul=mul*2;

        }
        return ans;

        
    }
};
class Solution {
public:
    int trailingZeroes(int n) {
        //a trailing zero is always produced by 5 and 2
        // We have to count no. of 5s and 2s.
        //But 2's always more than 5's. 
        //ans= Count of 5s in prime factors of n!
        //ans=floor(n/5) + floor(n/25) + floor(n/125) + ....
        int ans=0;
        for(int i=5;n/i>=1;i*=5){
            ans=ans+(n/i);
        }
        return ans;
    }
};

class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        long long s=1;
       long long e=x;
        while(s<e)
        {
            long long mid = s+(e-s)/2;
            if((mid*mid) == x)
            return mid;
            if ((mid*mid )<x)
            s=mid+1;
            else
            e=mid;
        }
        return s-1;
        
    }
};
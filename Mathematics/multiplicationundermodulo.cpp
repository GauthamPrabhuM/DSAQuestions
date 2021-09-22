class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        
            long long res = 0; 
            long long mod=1e9+7;
 
    a %= mod;
 
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
 
       
        a = (2 * a) % mod;
 
        b >>= 1; 
    }
 return res;

    }
};

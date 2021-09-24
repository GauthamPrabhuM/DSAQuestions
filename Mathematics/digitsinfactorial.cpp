 class Solution{
    public:
    int digitsInFactorial(int n)
    { if (n < 0)
        return 0;
 
     if (n <= 1)
        return 1;
 
     double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);
 
    return floor(digits) + 1;
     }
};

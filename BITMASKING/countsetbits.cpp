int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
 
    else
 
         return (n & 1) + countSetBits(n >> 1);
}



   unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }

int countSetBits(int N)
{
    int count = 0;
   
     for (int i = 0; i < sizeof(int) * 8; i++) {
        if (N & (1 << i))
            count++;
    }
    return count;
}


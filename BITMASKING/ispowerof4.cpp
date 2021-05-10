bool isPowerOfFour(unsigned int n)
{
    int count = 0;
 
    /*Check if there is only one bit set in n*/
    if ( n && !(n&(n-1)) )
    {
        /* count 0 bits before set bit */
        while(n > 1)
        {
            n >>= 1;
            count += 1;
        }
 
        /*If count is even then
        return true else false*/
        return (count%2 == 0)? 1 :0;
    }


 

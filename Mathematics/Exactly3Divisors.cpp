class Solution{
    public:
 int exactly3Divisors(int N)
{
        //Your code here
    int count = 1;
    
    if(N <= 3)
    return 0;
    
    
    for(int i = 3; i <= sqrt(N); i++ )
    {
    
    if(isPrime(i) && (i * i) <= N)
    count++;
    
    }
    return count;
    }
bool isPrime(int n){
    
    int limit = (int)sqrt(n);
    
    for(int i = 2; i <= limit; i++){
    
    if(n % i == 0){
    return false;
    }
    }
    return true;

}
};

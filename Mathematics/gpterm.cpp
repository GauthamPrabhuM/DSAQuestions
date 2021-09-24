class Solution{
    public:
        //Complete this function
 double power(double a, int n) {
  double ans = 1, x = a;
  while(n != 0) {
    if(n & 1) ans *= x;
    x *= x;
    n >>= 1;
  }
  return ans;
}

double termOfGP(double a, double b, int n) {
  assert(a >= -100 && a <= 100 && b >= -100 && b <= 100 && n >= 1 && n <= 5);
  double r = b/a;
  return a*power(r, n-1);
}

};

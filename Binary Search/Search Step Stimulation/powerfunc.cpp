int Solution::pow(int x, int y, int p) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long res = 1, temp = x%p;
    int sign = (x<0 and y%2 )? -1 : 1;
    x=abs(x);
    
    if(x%p==0) return 0;
    
    while(y>0) {
        
        if(y%2==1) {
            res *= temp;
            res %= p;
        }
        
        y=y/2;
        temp *= temp;
        temp %= p; 
    }
    
    if(sign<0) return (p-res)%p;
    return res;
}

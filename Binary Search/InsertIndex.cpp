int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.size();
    int l=0, h=n-1, mid;
    while(l<=h){
        mid = l + (h-l)/2;
        if(A[mid]<=B and (mid>n-2 || A[mid+1]>B)) {
            return A[mid]==B ? mid: mid+1;
        }
        
        else if(A[mid]<B) {
            l = mid+1;
        }
        
        else {
            h = mid-1;
        }
    }
    return A[0]>B ? 0 : n;
}

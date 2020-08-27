int Solution::search(const vector<int> &A, int B) {
    int n = A.size();
    int l=0, h=n-1, mid;
    
    while(l<=h) {
        int mid = l+(h-l)/2;
        
        if(A[mid]==B) {
            return mid;
        }
        
        // left part is sorted
        else if(A[mid]>=A[0]) {
            if(B>=A[0] and B<A[mid])
                h = mid - 1;    
                
            else 
                l = mid + 1;
        }
        
        // right part is sorted
        else {
            if(B>A[mid] and B<=A[n-1])
                l = mid + 1;
                
            else
                h = mid - 1;
        }
    }
    return -1;
}

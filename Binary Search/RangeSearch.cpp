vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n = A.size();
    int l=0, h=n-1, mid;
    
    vector<int> ans(2,-1);
    
    //Search Left Limit
    while(l<=h){
        mid = l +(h-l)/2;
        
        if(A[mid]==B and (mid<=0 || A[mid-1]!=B)) {
            ans[0]=mid;
            break;
        }
        
        else if(A[mid]<B) {
            l=mid+1;
        }
        
        else{
            h=mid-1;
        }
    }
    
    //Search Right Limit
    
    /*
    Kindly Note how the conditions are manipulated
    and order of conditional statements are changed
    */
    l=0, h=n-1;
    
    while(l<=h){
        mid = l +(h-l)/2;
        
        if(A[mid]==B and (mid>n-2 || A[mid+1]!=B)) {
            ans[1]=mid;
            break;
        }
        
        else if(A[mid]>B) {
            h=mid-1;
        }
        
        else{
            l=mid+1;
        }
    }
    
    return ans;
}

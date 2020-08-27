int Solution::searchMatrix(vector<vector<int> > &A, int B) {

    int n = A.size();
    int m = A[0].size();

    int l=0, h=m*n-1, mid;
    while(l<=h) {
        mid = l +(h-l)/2;
        if ((A[mid/m][mid%m] == B)) {
            return 1;
        }
        else if(A[mid/m][mid%m] < B) {
            l = mid+1;
        }
        else {
            h=mid-1;
        }
    }

    return 0;
}

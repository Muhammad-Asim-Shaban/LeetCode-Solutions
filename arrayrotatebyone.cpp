// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> a(n,0);
        a[0]=arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            a[i+1]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=a[i];
        }
    }
};
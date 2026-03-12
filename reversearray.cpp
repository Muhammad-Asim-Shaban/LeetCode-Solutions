class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i=0;
        int n=arr.size();
        int j=n-1;
        while(i<j)
        {
            int one=arr[i];
            arr[i]=arr[j];
            arr[j]=one;
            i++;
            j--;
        }
    }
};
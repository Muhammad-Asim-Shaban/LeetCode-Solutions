class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
       int ans=arr[0];
       int end=arr[0];
       int n=arr.size();
       for(int i=1;i<n;i++)
       {
           end=max(arr[i],end+arr[i]);
           ans=max(ans,end);
       }
       return ans;
    }
};
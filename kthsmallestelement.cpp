class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        // int res=0;
        // set<int>st;
        // int n=arr.size();
        // for(int i=0;i<n;i++)
        // {
        //     st.insert(arr[i]);
        //     int one=st.size();
        //     if(one==k)
        //     {
        //         res=arr[i];
        //         break;
        //     }
        // }
        // return res;
        return arr[k-1];;
    }
};
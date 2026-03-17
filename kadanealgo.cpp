#include<bits/stdc++.h>
using namespace std;
 int maxSubarraySum(vector<int> &arr) {
        // Code here
       int ans=arr[0];
       int end=arr[0];
       int n=arr.size();
       for(int i=1;i<n;i++)
       {
           end=max(arr[i],end+arr[i]);
           ans=max(ans,end);
           cout<<"end is "<<end<<endl;
           cout<<"ans is "<<ans<<endl;
       }
       return ans;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int ret=maxSubarraySum(vec);
    cout<<ret<<endl;
}
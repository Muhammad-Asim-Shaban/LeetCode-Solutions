class Solution {
public:
    void sortColors(vector<int>& arr) {
        int c0=0,c1=0,c2=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            c0++;
            else if(arr[i]==1)
            c1++;
            else 
            c2++;
        }
        // cout<<"value of c0"<<c0<<endl;
        // cout<<"value of c1"<<c1<<endl;
        // cout<<"value of c2"<<c2<<endl;
        int i=0;
            int j=0;
            while(j!=c0)
            {
                // cout<<"stuck in 1"<<endl;
                arr[i]=0;
                j++;
                i++;
            }
            j=0;
            //i++;
            while(j!=c1)
            {
                // cout<<"stuck in 2"<<endl;
                arr[i]=1;
                j++;
                i++;
            }
            //i++;
            j=0;
            while(j!=c2)
            {
                // cout<<"stuck in 3"<<endl;
                arr[i]=2;
                j++;
                i++;
            }
        // cout<<"The final value is "<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    }
};
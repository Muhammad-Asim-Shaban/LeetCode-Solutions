class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0;
        long long total=0;
        long long finaltime=0;
        long long n=customers.size();
        for(long long i=0;i<n;i++)
        {
            long long one=customers[i][0];
            long long two=customers[i][1];
            if(i==0||finaltime<one)
            finaltime=one;
            long long totaltime=finaltime+two;
            total+=totaltime-one;
            cout<<"wait for "<<i<<" is "<<totaltime-one<<endl;
            finaltime=totaltime;
        }
        cout<<total<<endl;
        ans = total*1.0/n;
        return ans;
    }
};
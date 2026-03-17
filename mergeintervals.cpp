class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }
        int one=intervals[0][0];
        int two=intervals[0][1];
        vector<vector<int>> ans;
        for(int i=1;i<n;i++)
        {
            int checkOne=intervals[i][0];
            if(checkOne<=two)
            {
                two=max(two,intervals[i][1]);
            }
            else
            {  
                vector<int> ret(2);
                ret[0]=one;
                ret[1]=two;
                ans.push_back(ret);
                one=intervals[i][0];
                two=intervals[i][1];
            }
        }
        vector<int> ret(2);
        ret[0]=one;
        ret[1]=two;
        ans.push_back(ret);
        return ans;

    }
};
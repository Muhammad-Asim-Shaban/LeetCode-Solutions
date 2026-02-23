<<<<<<< HEAD
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> pa;
        for(auto &it:mp)
        {
            pa.push_back({it.second,it.first});
        }
        // sort(pa.rbegin(),pa.rend());
        sort(pa.begin(),pa.end(),greater<pair<int,int>>());
        cout<<"the values after sorting is "<<endl;
        for(int i=0;i<pa.size();i++)
        {
            cout<<pa[i].first<<" "<<pa[i].second<<endl;
        }
        int m=pa.size();
        vector<int> ans;
        for(int i=0;i<min(k,m);i++)
        {
            ans.push_back(pa[i].second);
        }
        return ans;
    }
=======
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> pa;
        for(auto &it:mp)
        {
            pa.push_back({it.second,it.first});
        }
        // sort(pa.rbegin(),pa.rend());
        sort(pa.begin(),pa.end(),greater<pair<int,int>>());
        cout<<"the values after sorting is "<<endl;
        for(int i=0;i<pa.size();i++)
        {
            cout<<pa[i].first<<" "<<pa[i].second<<endl;
        }
        int m=pa.size();
        vector<int> ans;
        for(int i=0;i<min(k,m);i++)
        {
            ans.push_back(pa[i].second);
        }
        return ans;
    }
>>>>>>> 64e1cc01c1d4b11800d9fc7fe60ac491198f4c1f
};
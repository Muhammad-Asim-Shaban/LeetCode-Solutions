class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        bool check1=false;
        bool check2=false;
        int ret=0;
        int newret=0;
        int one=0;
        int two=0;
        int diff=0;
        for(auto &it:mp)
        {
            if(check1==false)
            {
                check1=true;
                ret++;
                one=it.first;
            }
            else if(check2==false)
            {
                check2=true;
                if(it.first==(one+1))
                {
                    ret++;
                }
                else
                {
                    newret=max(ret,newret);
                    ret=1;
                }
                two=it.first;
            }
            else
            {
                if(it.first==(two+1))
                {
                    ret++;
                }
                else
                {
                    newret=max(ret,newret);
                    ret=1;
                }
                two=it.first;
            }
        }
        newret=max(ret,newret);
        return newret;
    }
};
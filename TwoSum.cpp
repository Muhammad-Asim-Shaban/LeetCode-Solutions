<<<<<<< HEAD
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        bool check=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    check=true;
                    break;
                }
            }
            if(check==true)
            {
                break;
            }
        }
        return ans;
    }
=======
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        bool check=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    check=true;
                    break;
                }
            }
            if(check==true)
            {
                break;
            }
        }
        return ans;
    }
>>>>>>> 64e1cc01c1d4b11800d9fc7fe60ac491198f4c1f
};
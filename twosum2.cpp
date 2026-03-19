class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int n=numbers.size();
        int j=n-1;
        vector<int> ans;
        while(i<j)
        {
            cout<<"checking "<<i<< " and "<<j<<endl;
            int s=numbers[i]+numbers[j];
            if(s==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                i++;j--;
            }   
            else if(s<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};
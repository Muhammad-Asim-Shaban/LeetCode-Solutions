class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int ret=0;
        while(i!=j)
        {
            int first=height[i];
            int second=height[j];
            int diff=abs(j-i);
            int total=diff*min(first,second);
            ret=max(ret,total);
            if(first<=second)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ret;
    }
};
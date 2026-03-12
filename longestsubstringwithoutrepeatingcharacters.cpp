class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        if(s.length()==0)
        return 0;
        int n=s.length();
        int i=0;
        int maxanswer=INT_MIN;
        int current=1;
        while(i<n)
        {
            st.insert(s[i]);
            int j=i+1;
            while(j<n)
            {
                int one=st.size();
                if(j<n)
                {
                    st.insert(s[j]);
                    int two=st.size();
                    if(one==two-1)
                    {
                        current++;
                    }
                    else
                    {
                        maxanswer=max(maxanswer,current);
                        st.clear();
                        current=1;
                        break;
                    }
                }
                j++;
            
            }
            i++;
        }
        maxanswer=max(maxanswer,current);
        return maxanswer;
    }
};
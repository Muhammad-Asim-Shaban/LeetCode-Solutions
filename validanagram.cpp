class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.length();
        int m=t.length();
        bool check=true;
        for(int i=0;i<min(n,m);i++)
        {
            if(s[i]==t[i])
            {
                continue;
            }
            else
            {
                check=false;
                break;
            }
        }
        if(n!=m)
        check=false;
        return check;
    }
};
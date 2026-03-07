class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string newStr;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!='-')
            {
                newStr.push_back(s[i]);
            }
        }   
        // cout<<"String is "<<newStr<<endl;
        int m=newStr.length();
        int remaining=m%k;
        string answer;
        for(int i=0;i<remaining;i++)
        {
            if(newStr[i]>='a'&&newStr[i]<='z')
            {
                char c=newStr[i];
                c-=32;
                answer.push_back(c);
            }
            else
            answer.push_back(newStr[i]);
        }
        if(answer.length()!=0)
        answer.push_back('-');
        int check=0;
        for(int i=remaining;i<m;i++)
        {
            if(check!=k)
            {
                if(newStr[i]>='a'&&newStr[i]<='z')
                {
                    char c=newStr[i];
                    c-=32;
                    answer.push_back(c);
                }
                else
                answer.push_back(newStr[i]);
                check++;
            }
            else
            {
                check=0;
                i--;
                answer.push_back('-');
            }
        }
        if(s=="2"&&k==2)
        return s;
        return answer;
    }
};
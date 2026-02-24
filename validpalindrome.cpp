class Solution {
public:
    bool isPalindrome(string s) {
        string finalstring;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                char c=s[i];
                c+=32;
                finalstring.push_back(c);
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                finalstring.push_back(s[i]);
            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                finalstring.push_back(s[i]);
            }
            else
            {
                continue;
            }
        }
        cout<<finalstring<<endl;
        int i=0;
        int p=finalstring.length();
        if(p==0)
        {
            return true;
        }
        int j=p-1;
        while(i<j)
        {
            if(finalstring[i]!=finalstring[j])
            {
                cout<<"giving false at i = "<<i<<" and j = "<<j<<endl;
                cout<<"the values are "<<finalstring[i]<<" and "<<finalstring[j]<<endl;
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
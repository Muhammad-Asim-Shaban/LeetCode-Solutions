class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n=emails.size();
        string one;
        set<string> st;
        bool at=false; 
        bool plus=false;
        for(int i=0;i<n;i++)
        {
            int m=emails[i].length();
            for(int j=0;j<m;j++)
            {
                if(at==true)
                {
                    cout<<"one"<<endl;
                    one.push_back(emails[i][j]);
                }
                else if(emails[i][j]=='@')
                {
                    cout<<"five"<<endl;
                    at=true;
                    one.push_back(emails[i][j]);
                }
                else if(plus==true&&at==false)
                {
                    cout<<"two"<<endl;
                    continue;
                }
                else if(emails[i][j]=='.'&&at==false)
                {
                    cout<<"three"<<endl;
                    continue;
                }
                else if(emails[i][j]=='+'&&at==false)
                {
                    cout<<"four"<<endl;
                    plus=true;
                    continue;
                }
                
                else
                {
                    cout<<"six"<<endl;
                    one.push_back(emails[i][j]);
                }
            }
            st.insert(one);
            one="";
            at=false;
            plus=false;
        }  
        auto ptr=st.begin();
        while(ptr!=st.end())
        {
            cout<<*(ptr)<<endl;
            ptr++;
        }
        return st.size();
    }
};
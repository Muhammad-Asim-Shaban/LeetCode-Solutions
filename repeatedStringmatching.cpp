class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.length();
        int m=b.length();
        string temp="";
        int count=0;
        while(temp.size()<m)
        {
            temp+=a;
            count++;
        }
        if(temp.find(b)!=string::npos) return count;
        if((temp+a).find(b)!=string::npos)return count+1;
        else return -1;
    }
};
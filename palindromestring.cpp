class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string one=s;
        reverse(s.begin(),s.end());
        return one==s;
    }
};
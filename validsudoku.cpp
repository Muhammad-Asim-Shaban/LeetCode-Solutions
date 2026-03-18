class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int>mp;
        //column
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                int val=board[i][j]-'0';
                mp[val]++;
            }
            for(auto &e:mp)
            {
                if(e.second!=1)
                {
                    return false;
                }
            }
            mp.clear();
        }
        //row 
        for(int j=0;j<9;j++)
        {
            for(int i=0;i<9;i++)
            {
                if(board[i][j]=='.')
                continue;
                int val=board[i][j]-'0';
                mp[val]++;
            }
            for(auto &e:mp)
            {
                if(e.second!=1)
                {
                    return false;
                }
            }
            mp.clear();
        }
        for(int blockRow = 0; blockRow < 3; blockRow++) {
    for(int blockCol = 0; blockCol < 3; blockCol++) {
        map<int,int> mp;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                char c = board[blockRow*3 + i][blockCol*3 + j];
                if(c == '.') continue;
                mp[c]++;
                if(mp[c] > 1) return false;
            }
        }
    }
}
        return true;
    }
};
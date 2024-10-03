class Solution {
public:
    string s1, s2;
    int memo[505][505];
    int f(int i,int j){
        if(i == (int)s1.size()){
            return s2.size()-j;
        }
        
        if(j == (int)s2.size()){
            return s1.size()-i;
        }

        int &ret = memo[i][j];

        if(~ret) return ret;

        if(s1[i] == s2[j]){
            return ret = f(i+1, j+1);
        }

        int insert = 1 + f(i, j+1);
        int insert2 = 1 + f(i+1, j);
        int change = 1 + f(i+1, j+1);

        return ret = min(change, min(insert,insert2));
    }
    int minDistance(string word1, string word2) {
        memset(memo, -1, sizeof(memo));
        s1 = word1, s2 = word2;
        return f(0,0);
    }
};
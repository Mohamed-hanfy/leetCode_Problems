class Solution {
public:
    int memo[1005][1005];
    string s1,s2;
    
    int lcs(int idx1, int idx2){
        if(idx1 >= s1.size() || idx2 >= s2.size()) return 0;

        auto &ret = memo[idx1][idx2];

        if(~ret) return ret;
         
        if(s1[idx1] == s2[idx2]) return ret = 1+lcs(idx1+1,idx2+1);

        int ch1 =  lcs(idx1+1,idx2);
        int ch2 =  lcs(idx1,idx2+1);
        return ret = max(ch1,ch2);
    }

    int longestCommonSubsequence(string text1, string text2) {
        memset(memo, -1, sizeof(memo));

        s1 = text1, s2 = text2;
        
        return lcs(0,0);
    }
};
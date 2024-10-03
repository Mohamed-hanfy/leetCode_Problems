class Solution {
public:
    int memo[100000];

    int f(int n){
        if(n==0)return 0;

        auto &ret = memo[n];

        if(~ret) return ret;

        ret = 10000000;

        for(int i=1; i*i <= n; i++){
            ret = min(ret,1+f( n-i*i));
        }
        return ret;
    }

    int numSquares(int n) {
    memset(memo, -1, sizeof(memo));
    return f(n);
    }
};
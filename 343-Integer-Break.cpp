class Solution {
public:
    int memo[60];

    int f(int n){
        if(n==1) return 1;

        auto &ret = memo[n];
        if(~ret) return ret;
        ret = n;
        for(int i=1; i< n ;i++){
            ret = max(ret, i * f(n-i));
        }

        return ret;
    }

    int integerBreak(int n) { 
        if(n==2|| n==3) return n-1;
        memset(memo, -1, sizeof(memo));

        return f(n);
    }
};
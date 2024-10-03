class Solution {
public:
    int memo[10000];
    vector<int>arr;

    int f(int idx){
        if(idx >= arr.size()) return 0;
        
        auto &ret = memo[idx];
        if(~ret) return ret;

        int ch1 = arr[idx] + f(idx + 1);
        int ch2 = arr[idx] + f(idx + 2);

        return ret = min(ch1, ch2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        memset(memo,-1,sizeof(memo));
        arr=cost;
        return min(f(0),f(1));

    }
};
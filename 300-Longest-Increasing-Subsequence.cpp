class Solution {
public:

    int memo [2505][2505];
    vector<int>arr;
    int lis(int idx,int pre){
        if(idx == (int) arr.size()) return 0;

        auto &ret = memo[idx][pre];
        if(~ret) return ret;

        int ch1 = lis(idx+1, pre);

        int ch2 = 0;
        if(pre>=arr.size() || arr[pre] < arr[idx]){
            ch2 = 1 + lis(idx+1,idx);
        }
        return ret = max(ch1,ch2);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(memo, -1, sizeof(memo));
        arr=nums;
        return lis(0,arr.size());
    }
};
class Solution {
public:
    int memo[105][10000];
    vector<int> arr;
    int knap_sack(int idx, int pre){
        if(idx == arr.size()) return 0;

        int &ret = memo[idx][pre];

        if(ret != -1) return ret;

        int ch1=knap_sack(idx + 1, pre);

        int ch2=0;
        if(pre >= arr.size() || pre + 1 != idx){
            ch2 = arr[idx] + knap_sack(idx + 1, idx);
        }  

        return ret = max(ch1,ch2);
    }

    int rob(vector<int>& nums) {
        arr=nums;
        memset(memo,-1,sizeof(memo));
        return knap_sack(0, arr.size());   
    }
};
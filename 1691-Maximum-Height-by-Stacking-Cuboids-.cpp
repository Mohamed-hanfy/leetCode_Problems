class Solution {
public:

    int  memo[105][10000];
    vector<vector<int>>arr;

    int cubo(int idx, int bre){
        if(idx>=arr.size()) return 0;

        int &ret = memo[idx][bre];

        if(ret != -1) return ret;

        int ch1 = cubo(idx + 1, bre);

        int ch2 = 0;
        if(bre >= arr.size() || (arr[idx][0] >= arr[bre][0] && arr[idx][1] >= arr[bre][1] && arr[idx][2] >= arr[bre][2])){
            ch2 = arr[idx][2] + cubo(idx+1,idx);
        }

       return ret = max(ch1,ch2);
    }

    int maxHeight(vector<vector<int>>& cuboids) {
        arr=cuboids;

        memset(memo, -1, sizeof(memo));

        for (auto &it : arr) {
            sort(it.begin(), it.end());
        }
        sort(arr.begin(), arr.end());

        return cubo(0,arr.size());
    }
};
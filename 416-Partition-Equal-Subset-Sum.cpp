class Solution {
public:

    int memo[200][100*200 + 1];
    vector<int>arr;

    int candivide(int idx, int target){
         if (target < 0)
		return false;
        if(idx >= arr.size()) return 0;

       

        if(target == 0) return 1;

        auto &ret = memo[idx][target];
        
        if(ret != -1) return ret;

        int ch1 = candivide(idx+1,target);

        int ch2=0;
        if(arr[idx] <= target){
            ch2 = candivide(idx+1,target- arr[idx]);
        }

        return ret = max(ch1,ch2);
    }

    bool canPartition(vector<int>& nums) {
    int sum =0;

    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
        arr.push_back(nums[i]);
    }
    
    if(sum%2) return 0;
    memset(memo, -1, sizeof(memo));
   return candivide(0,sum/2);
    }
};
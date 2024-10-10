class Solution {
public:
    void wiggleSort(vector<int>& nums) {
      
    int n = nums.size();
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        
        int j = n - 1;
        for (int i = 1; i < n; i += 2) {
            nums[i] = sorted[j];
            j--;
        }
        for (int i = 0; i < n; i += 2) {
            nums[i] = sorted[j];
            j--;
        }
    }
};
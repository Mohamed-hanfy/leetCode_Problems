class Solution {
public:

    int maxArea(vector<int>& height) {
        int p1=0,p2= height.size()-1;

        int maxValue=-1;

        while(p1<p2){
            int mn = min(height[p1], height[p2]);

            int ans = mn * abs((p1+1)-(p2+1));
            maxValue = max(maxValue, ans);

        if(height[p1] <=height[p2]) p1++;
        else p2--;
        }
        return maxValue;
    }
};
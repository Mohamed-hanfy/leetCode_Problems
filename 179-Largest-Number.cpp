class Solution {
public:

    static bool compare(string &a, string &b){
        return a+b>b+a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(auto it : nums) v.push_back(to_string(it));

        sort(v.begin(),v.end(),compare);

         if (v[0] == "0") {
            return "0";
        }

        string ans; 

        for(auto it : v) ans+=it;

        return ans;
    }
};
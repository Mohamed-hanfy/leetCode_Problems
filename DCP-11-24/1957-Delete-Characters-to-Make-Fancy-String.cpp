class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
    bool arr[n];
    memset(arr,1,sizeof(arr));

    for(int i = 0; i < (int)s.size()-2;i++ ){
        int j=i+1,k=i+2;

        if(s[i]==s[j]&&s[i]==s[k]) arr[i]=0;

    }
    string ans;
    for (int i = 0; i < n; ++i) {
        if(arr[i]) ans.push_back(s[i]);
    }
    return ans;

    }
};
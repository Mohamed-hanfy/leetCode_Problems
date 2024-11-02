class Solution {
public:
    bool isCircularSentence(string sentence) {
        int sz = sentence.size();
        if(sentence[0] != sentence[sz-1]) return 0;

        for(int i = 0; i < sz; i++){
            if(sentence[i+1] == ' ' && sentence[i] != sentence[i+2]) return 0;
        }

        return 1;
    }
};
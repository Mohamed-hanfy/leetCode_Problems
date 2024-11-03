class Solution {
public:
    bool rotateString(string s, string goal) {

        s += s;
        return (s.find(goal) != -1) && (s.size() / 2) == goal.size();
    }
};
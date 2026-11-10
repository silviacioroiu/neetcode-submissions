class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        
        for(int i = 0;i<s.size()-1;i++){
           int point = s[i]+'0';
           int point2 = s[i+1]+'0';
           score +=abs(s[i+1]-s[i]);
        }
        return score;
    }
};
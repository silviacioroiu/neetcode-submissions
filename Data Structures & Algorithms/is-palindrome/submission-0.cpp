class Solution {
public:
    bool isPalindrome(string s) {
        // transformimg the string
        int n = s.size();
        string t;
        for (char c : s){
            if (isalnum(c)) t += tolower(c);
        }
        cout<<t;

        int l = 0;
        int r = t.size()-1;
        while(l<=r ){
            if(t[r] == t[l]){
                r--;
                l++;
                
            }else{
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> suf;
        vector<int> pref;
        int n = nums.size();

        int s =1;
        for(int i = 0;i<n;i++){
            if(i==0){
                suf.push_back(s);
            }else{
                s = nums[i-1]*s;
                suf.push_back(s);
            }
        }

        int p = 1;
        for(int i = n-1;i>=0;i--){
            if(i==n-1){
                pref.push_back(p);
            }else{
                p=nums[i+1]*p;
                pref.push_back(p);
            }
        }
        reverse(pref.begin(),pref.end());

        vector<int> result;
        int r;
        for(int i = 0;i<n;i++){
            r = pref[i]*suf[i];
            result.push_back(r);
        }
        return result;
    }
};

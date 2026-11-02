class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq; // key is number ,  value is appearence
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(freq.find(nums[i])!=freq.end()){
                freq[nums[i]]++;
            }else{
                freq[nums[i]]=1;
            }
        }

        //sorting map to get the 
        vector<pair<int,int>> A;
        vector<int> result;
        for (auto& it : freq) { 
            A.push_back(it); 
        }
        sort(A.begin(),A.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });
        int it =0;
        while(k){
            result.push_back(A[it].first);
            it++;
            k--;
        }
        return result;

    }
};

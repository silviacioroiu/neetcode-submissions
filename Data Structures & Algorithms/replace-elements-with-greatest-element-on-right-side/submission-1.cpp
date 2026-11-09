class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result;
        int n = arr.size();
        // brute force
        for(int i =0;i<n-1;i++){
            int max =0;
            for(int j = i+1;j<n;j++){
                
                if(arr[j]>max) max = arr[j];
                
            }
            result.push_back(max);
        }
        result.push_back({-1});
        return result;
    }
};
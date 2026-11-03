class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size()-1;
        int left = 0;
        vector<int> res;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                res.push_back(left+1);
                res.push_back(right+1);
                return res;
            }
            if(numbers[left]+numbers[right]>target){
                right--;
            } else{
                left++;
            }

        }
    }
};

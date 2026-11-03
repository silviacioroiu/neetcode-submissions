class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int max = 0;
        int n = heights.size();
        int right = n-1;
        int left = 0;
        while(left!=right){
            int temp = min(heights[right],heights[left])*(right-left);
            if(temp>max) max=temp;

            //shifting
            if(heights[left]<heights[right]) left++;
            else if(heights[left]>heights[right]) right--;
            else right--;
        }
        return max;
    }
};

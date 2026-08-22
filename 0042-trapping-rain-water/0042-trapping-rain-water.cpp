class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int l_max = height[i];
        int r_max = height[j];
        int count = 0;

        while(i < j){
            if(l_max < r_max){
                i++;
                l_max = max(l_max,height[i]);
                count += l_max - height[i];
            }
            else{
                j--;
                r_max = max(r_max,height[j]);
                count += r_max - height[j];
            }
        }
        return count;
    }
};
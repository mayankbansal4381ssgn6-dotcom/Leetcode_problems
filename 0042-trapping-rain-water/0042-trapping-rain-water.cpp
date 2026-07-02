class Solution {
public:
    int trap(vector<int>& height) {
        int max_left = 0;
        int max_right = 0;
        int water = 0;
        int index = 0;
        int max_height = 0;
        // first find the max height building
        for (int i = 0; i < height.size(); i++) {
            if (height[i] > max_height) {
                max_height = height[i];
                index = i;
            }
        }

        // check for the left part
        for (int i = 0; i < index; i++) {
            max_left = max(max_left, height[i]);
            if (max_left > height[i]) {
                water += max_left - height[i];
            }
        } // check for the right part
        for (int i = height.size() - 1; i > index; i--) {
            max_right = max(max_right, height[i]);
            if (max_right > height[i]) {
                water += max_right - height[i];
            }
        }
        return water;
    }
    

}
;
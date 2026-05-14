class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        
        while(left<=right){
            int mid = (right+left)/2;
            if(nums[mid]==target) return mid;
            if (nums[left] <= nums[mid]) {       // sol yarı sorted
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;             // target sol yarıda
            } else {
                left = mid + 1;              // target sağ yarıda
            }
        } else {                              // sağ yarı sorted
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;              // target sağ yarıda
            } else {
                right = mid - 1;             // target sol yarıda
            }
        }
        }
        return -1;
    }
};

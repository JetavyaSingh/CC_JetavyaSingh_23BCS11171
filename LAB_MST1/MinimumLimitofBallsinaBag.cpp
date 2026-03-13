class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while(left<right){
            int mid = (left+right) / 2;

            long long op = 0;
            for(int i=0;i<nums.size();++i){
                op += (nums[i] - 1) / mid;
            }

            if(op <= maxOperations) right = mid;
            else left = mid+1;
        }
        return left;
    }

};

class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
         const int MOD = 1e9 + 7;
            vector<int> bitCount(32,0);
            for(int i=0;i<nums.size();++i){
                for(int j=0;j<32;++j){
                    if(nums[i] & (1 << j)) bitCount[j]++;
                }
            }

            long long ans = 0;
            for(int i=0;i<k;++i){
                long long num =0;
                for(int b=0;b<32;++b){
                    if(bitCount[b] > 0){
                        num |= (1LL << b);
                        bitCount[b]--;
                    }
                }
                    ans=(ans+(num*num))%MOD;
            }
            return ans;
    }
};

class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for (long long b : batteries) sum += b;

        long long low = 0, high = sum / n, ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long energy = 0;

            for (long long b : batteries)
                energy += min(b, mid);

            if (energy >= mid * n) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};

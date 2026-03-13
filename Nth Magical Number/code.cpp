class Solution {
public:
    typedef long long ll;
    const int mod = 1e9 + 7;

    ll gcd(ll a, ll b){
        return b == 0 ? a : gcd(b, a % b);
    }

    int nthMagicalNumber(int n, int a, int b) {
        ll l = min(a,b);
        ll r = (ll)n * min(a,b);

        ll lcm = (ll)a * b / gcd(a,b);

        while(l < r){
            ll mid = l + (r-l)/2;

            ll count = mid/a + mid/b - mid/lcm;

            if(count < n)
                l = mid + 1;
            else
                r = mid;
        }

        return l % mod;
    }
};

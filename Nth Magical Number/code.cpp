class Solution {
public:

    typedef long long ll;
    ll mod = 1e9 + 7;

    ll gcd(ll a, ll b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    int nthMagicalNumber(int n, int a, int b) {
          ll L = (ll)a * b / gcd(a, b);

        for(int count = 1;count<=n;count++){
            if(i*a < j*b){
                val = i*a;
                i++;
            }else if(j*b < i*a){
                val = j*b;
                j++;
            }else{
                val = i*a;
                i++;
                j++;
            }
        }
        return val % mod;
    }
};

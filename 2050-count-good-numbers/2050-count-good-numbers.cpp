class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) result = (result * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }


    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2; // even indices
        long long oddPositions = n / 2;        // odd indices

        long long evenWays = modPow(5, evenPositions, MOD);
        long long oddWays = modPow(4, oddPositions, MOD);

        return (evenWays * oddWays) % MOD;
    }
};
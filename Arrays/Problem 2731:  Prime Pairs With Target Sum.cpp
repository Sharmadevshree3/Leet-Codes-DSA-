class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

  
        vector<int> primes;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }


        vector<vector<int>> ans;
        int start = 0;
        int end = primes.size() - 1;

        while (start <= end) {
            int sum = primes[start] + primes[end];

            if (sum == n) {
                ans.push_back({primes[start], primes[end]});
                start++;
                end--;
            } else if (sum < n) {
                start++;
            } else {
                end--;
            }
        }

        return ans;
    }
};

class Solution {
public:
    int countPrimes(int n) {
         bool prime[n + 1];
    memset(prime, true, sizeof(prime));
   int cnt=0;
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    
    for (int p = 2; p < n; p++)
        if (prime[p])
            cnt++;

            return cnt;
}

      
    
};
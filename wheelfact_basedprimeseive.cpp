#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void generate_primes(int n)
{
    if (n < 2) return;

    // Step 1: Initialize first three primes
    vector<int> primes = {2, 3};
    cout << "2 3 ";

    // Step 2: Initialize variables
    int x = 5;                      // Current prime candidate
    int plimsq = 25;                 // Square of the latest known prime
    size_t limit = 2;                // Number of stored primes
    vector<int> multiple(n, 0);      // To track multiples of primes

    // Step 3: Prime generation loop
    while (x < n)
    {
        bool is_prime = true;
        
        // Step 3c: Test if x is prime by checking divisibility
        for (size_t j = 1; j < limit; j++) // Start from 3rd prime (skipping 2)
        {
            if (multiple[j] < x) 
                multiple[j] += 2 * primes[j]; // Move to next multiple

            if (x == multiple[j]) 
            {
                is_prime = false;
                break;
            }
        }

        // Step 3d: If x is prime, output and store
        if (is_prime) 
        {
            cout << x << " ";
            primes.push_back(x);
            limit++;

            // Update plimsq if needed
            if (x >= plimsq)
            {
                plimsq = primes[limit - 1] * primes[limit - 1];
            }
        }

        // Step 3a: Move to next x, skipping multiples of 2 and 3
        x += (x % 6 == 1) ? 4 : 2;
    }
}

int main()
{
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;
    
    generate_primes(n);
    
    return 0;
}

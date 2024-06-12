# CSES Math Problems:

### 1. Exponentiation

    Here we need to calculate a^b in the best possible efficient way. So we use recursion to break down the problem into smaller subproblems.
        a^b = a^(b/2)* a^(b/2) if b is even
        else a^b = a*(a^(b-1/2))*(a^(b-1/2))
    Time complexity: O(logb), each time the power is halved

### 2. Counting Divisors

    Given a list of n numbers, we need to find the number of divisors for each of them.

    Approach 1:
    Here if we use the principle that we can get all the divisors by iterating till sqrt(x), then for each element we'll take O(sqrt(x)) time and then over all TC would be O(nsqrt(x))

    Approach 2:
    Precomputing the number of factors for all the numbers between 1 and 10^5. We iterate from 1 to 10^5 and increase the count of factors for all the multiples of i. This takes O(nlog(x)) time and then answer the query with O(1) time.

### 3. Common Divisors

    Given a list of n numbers, we need to find 2 numbers such that their GCD is maximum. Extreme brute force would be to calculate GCD of every pair and then get the maximum. But the TC would be O(n^2 log(n)).

    Efficient Approach:
    We start from the highest possible GCD that is 10^5 and then decrement the GCD by 1 in each iteration. For every iteration, we store the number of multiples of current GCD in our array. If there are more than 2, then we have got our answer. This works because if GCD(a,b) = x, then some multiple of x equals a and some multiple of x equals b.

    TC: O(nlog(n))

import math
import sys

def sumPrimes(n) :
    sum = 0;
    for i in range(2, n + 1):   # loop over possible primes
        prime = True;
        for j in range(2, i):  # loop over possible factors
            if (i % j == 0) : prime = False;
        if (prime) : sum += i;
    return sum;

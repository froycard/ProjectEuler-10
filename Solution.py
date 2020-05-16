from math import sqrt

def IsPrime(n):
    if (n <= 1):
        return False
    if (n == 2):
        return True
    if (n % 2 == 0):
        return False

    i = 3
    while i <= sqrt(n):
        if n % i == 0:
            return False
        i = i + 2

    return True

n=2000000
primes=0
while n>1:
    n-=1
    if IsPrime(n):
        primes+=n

print("The sum is ", primes) 

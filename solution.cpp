#include<iostream>
#include<cmath>
using namespace std; 
  
bool IsPrime(unsigned n) {
  if (n <= 1) return false;
  if (n % 2 == 0) return false;
  for (auto j=3; j<=sqrt(n); j++) {
    if (n%j==0) {
      return false;
    }
  }      
  return true;
}
 
int main() 
{ 
	unsigned num = 2000000; 
	unsigned long long primes = 0;
	while (--num>1)
		if(IsPrime(num)) primes+=num;
	cout<<primes<<endl;
  
	return 0; 
}

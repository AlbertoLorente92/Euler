#include <iostream>
#include <string>
#include <math.h>
#include <list>

std::list<int> ESieve(int upperLimit) {
	int sieveBound = (int)(upperLimit - 1) / 2;
	int upperSqrt = ((int)sqrt(upperLimit) - 1) / 2;
 
	bool* PrimeBits = new bool[sieveBound + 1];
	for(int i = 0; i < sieveBound + 1; i++){
		PrimeBits[i] = true;
	}
 
	for (int i = 1; i <= upperSqrt; i++) {
		if (PrimeBits[i]) {
			for (int j = i * 2 * (i + 1); j <= sieveBound; j += 2 * i + 1) {
				PrimeBits[j] = false;
			}
		}
	}

	std::list<int> list;
	list.push_back(2);
	for (int i = 1; i <= sieveBound; i++) {
		if (PrimeBits[i]) {
			list.push_back((2 * i + 1));
		}
	}
 
	delete[] PrimeBits;
	PrimeBits = NULL;
	return list;
}

long long int sum_primes(const int x){
	std::list<int> primes = ESieve(x);
	long long int sum = 0L;

	for(int i : primes){
		sum += i;
	}

	return sum;
}

int main(int argc, char* argv[]){
	const long long int top_num = 2000000L;
	long long sum = sum_primes(top_num);
	std::cout << "END: " << sum << std::endl;
	system("PAUSE");
	return 0;
}
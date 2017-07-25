#include <iostream>

int main(int argc, char* argv[]){
	long long int num = 600851475143;
	long long int largest_prime_factor = 1;

	while(num != 1){
		std::cout << num;
		for(long long int i = 2; i <= num; i++){
			if(num%i==0){
				std::cout << " || " << i << std::endl;
				num = num / i;	
				std::cout << num << " || " << i << std::endl;
				if(i>largest_prime_factor){
					largest_prime_factor = i;
				}
				i = num;

			}
		}
	}

	std::cout << std::endl << "END: " << largest_prime_factor << std::endl;

	system("PAUSE");
	return 0;
}
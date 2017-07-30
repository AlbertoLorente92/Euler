#include <iostream>
#include <string>
#include <math.h>
#include <list>

long long int sum_naturals(const long long int x){
	long long int sum = 0;

	for(long long int i = 1; i <= x; i++){
		sum += i;
	}

	return sum;
}

int num_of_divisors(const long long int x){
	int sum = 2;

	for(long long int i = x/2; i > 1; i--){
		if(x%i==0){
			sum++;
		}
	}

	return sum;
}
int main(int argc, char* argv[]){
	bool find = false;
	long long int x = 1;
	long long int aux;
	int num;
	while(!find){
		aux = sum_naturals(x);
		num = num_of_divisors(aux);
		//std::cout	<< "Num=" << x << " Triange=" << aux << " Div=" << num << std::endl;
		if(num>=500){
			find = true;
		}else{
			x++;
		}
	}
	std::cout	<< "END -- Num=" << x << " Total=" << aux << std::endl;
	system("PAUSE");
	return 0;
}
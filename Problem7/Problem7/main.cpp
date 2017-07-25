#include <iostream>
#include <string>
#include <math.h>

bool num_is_prime(const int x){
	for(int i = 2; i < x/2; i++){
		if((x%i)==0){
			return false;
		}
	}

	return true;
}

int main(int argc, char* argv[]){
	int pos = 10001;

	int x = 2;
	while(pos >= 0){
		if(num_is_prime(x)){
			pos -= 1;
		}
		x++;
	}

	std::cout << "END: " << x-1 << std::endl;

	system("PAUSE");
	return 0;
}
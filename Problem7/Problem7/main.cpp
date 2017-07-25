#include <iostream>
#include <string>
#include <math.h>



bool num_is_prime_aux(const int x,int state){
	if(x%3==0 || x%7==0){
		return false;
	}else{
		const int seq[4] = {2,4,2,2};
		for(int i = 11; i <= x/2; i=i+seq[state%4]){
			state++;
			if((x%i)==0){
				return false;
			}
		}
	
		return true;
	}
}

bool num_is_prime(const int x){
	/*
					+2					+4							+2					+2
	PosiblePrime | No | PosiblePrime | No | No |  No | PosiblePrime | No | PosiblePrime | No |
	           1 |  2 |	           3 |  4 |	 5 |  6	 |            7	|  8 |	          9 | 10 |
	          11 | 12 |	          13 | 14 |	15 | 16	 |           17	| 18 |	         19 | 20 |
	          21 | 22 |	          23 | 24 |	25 | 26	 |           27	| 28 |	         29 | 30 |
	*/
	if(x <= 10){
		switch(x){
			case 2: return true; break;
			case 3: return true; break;	
			case 5: return true; break;
			case 7: return true; break;
			default: return false; break;
		}
	}else{
		// x > 10
		switch(x % 10){
			case 1: return num_is_prime_aux(x,0); break;  //Posible prime
			case 3: return num_is_prime_aux(x,1); break;  //Posible prime
			case 7: return num_is_prime_aux(x,2); break;  //Posible prime
			case 9: return num_is_prime_aux(x,3); break;  //Posible prime
			default: return false; break; //No
		}
	}
}

int main(int argc, char* argv[]){
	int pos = 10001;

	int x = 2;
	while(pos > 0){
		if(num_is_prime(x)){
			//std::cout << x << std::endl;
			pos -= 1;
		}

		if(pos > 0){
			x++;
		}
	}

	std::cout << std::endl << "END: " << x << std::endl;
	system("PAUSE");
	return 0;
}
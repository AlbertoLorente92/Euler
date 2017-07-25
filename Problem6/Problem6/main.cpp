#include <iostream>
#include <string>
#include <math.h>

int square_of_the_sum(int x, int y){
	int sum = 0;

	for(int i = x; i <= y; i++){
		sum += i;
	}

	return (int)pow(sum,2.0);
}

int sum_of_the_squares(int x, int y){
	int sum = 0;

	for(int i = x; i <= y; i++){
		sum += (int)pow(i,2.0);
	}

	return sum;
}

int main(int argc, char* argv[]){
	int x,y,diff;
	x = 1;
	y = 100;
	diff = square_of_the_sum(x,y) - sum_of_the_squares(x,y);

	std::cout << "END: " << diff << std::endl;

	system("PAUSE");
	return 0;
}
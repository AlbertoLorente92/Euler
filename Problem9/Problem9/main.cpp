#include <iostream>
#include <string>
#include <math.h>

bool pythagorean_triplet(int a,int b,int c){
	return (pow(a,2) + pow(b,2))==pow(c,2);
}

int main(int argc, char* argv[]){
	/*
		a^2 + b^2 = c^2
		a + b + c = 1000
		a < b < c
	*/
	int a,b,c;
	a = 1;
	b = 2;
	c = 3;

	/*	check = 1 --> a+1 && b=a+1 && c=a+2
		check = 2 --> b=b+1 && c=b+1
		check = 3 --> c=c+1	*/
	do{
		do{
			c = c + 1;
			if((a+b+c)>1000){
				b = b + 1;
				c = b + 1;
				if((a+b+c)>1000){
					a = a + 1;
					b = a + 1;
					c = a + 2;
				}
			}		
			//std::cout << std::endl << "END: a=" << a << " b=" << b << " c=" << c << std::endl;
		}while(!pythagorean_triplet(a,b,c));
		std::cout << std::endl << "IT a=" << a << " b=" << b << " c=" << c << std::endl;
	}while((a+b+c)!=1000);
	int aux = a*b*c;
	std::cout << std::endl << "END: a=" << a << " b=" << b << " c=" << c << " total=" << aux << std::endl;
	system("PAUSE");
	return 0;
}
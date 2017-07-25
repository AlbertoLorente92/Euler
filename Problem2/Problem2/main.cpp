#include <iostream>

int main(int argc, char* argv[]){
	const int top_num = 4000000;
	int a,b,count,aux;
	a = 1;
	b = 2;
	count = 0;
	while(a < top_num){
		if(a%2==0){
			count+=a;
		}
		aux = b + a;
		a = b;
		b = aux;
	}

	std::cout << count << std::endl;

	system("PAUSE");
	return 0;
}
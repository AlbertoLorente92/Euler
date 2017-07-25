#include <iostream>

int main(int argc, char* argv[]){
	const int top_num = 1000;

	int count = 0;
	for(int i = 0; i < top_num; i++){
		if((i%3==0) || (i%5==0)){
			count = count + i;
		}
	}

	std::cout << count << std::endl;
	system("PAUSE");
	return 0;
}
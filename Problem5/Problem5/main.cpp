#include <iostream>
#include <string>

bool is_divisible_by1to20(int aux){
	for(int i = 1; i <= 20; i++){
		if((aux%i)!=0){
			return false;
		}
	}

	return true;
}

int main(int argc, char* argv[]){
	int x = 21;
	bool find = false;
	while(!find){
		if(is_divisible_by1to20(x)){
			find = true;
		}else{
			x += 1;
		}
	}

	std::cout << "END: " << x << std::endl;

	system("PAUSE");
	return 0;
}
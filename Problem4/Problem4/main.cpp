#include <iostream>
#include <string>

bool is_palindromic(std::string str,int x,int y){
	if(x>=y){
		return true;
	}else{
		if(str.at(x)==str.at(y)){
			return is_palindromic(str,x+1,y-1);
		}else{
			return false;
		}
	}
}

bool is_palindromic(std::string str){
	return is_palindromic(str,0,str.length()-1);
}

bool is_palindromic_num(int aux){
	int n, num, digit, rev = 0;
	num = aux;
	n = num;
	do{
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

	if (n == rev){
		return true;
	}else{
		return false;
	}
}

int main(int argc, char* argv[]){
	int x,y,aux;
	x = y = 999;
	int max_pal = 1;
	bool find = false;
	while(y!=1){
		aux = x * y;
		if(is_palindromic_num(aux) && aux > max_pal){
			max_pal = aux;
		}
		x -= 1;
		if(x==0){
			y -= 1;
			x = y;
		}
	}

	std::cout << std::endl << "END: " << max_pal << std::endl;

	system("PAUSE");
	return 0;
}
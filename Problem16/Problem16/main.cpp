#include <iostream>
#include <string>
#include <math.h>
#include <list>

int main(int argc, char* argv[]) {
	long long int x = 2L;
	long long int sum = 0L;
	int pot = 1000;

	std::string s = std::to_string(pow(x, pot));
	for (int i = 0; i < s.length() && s.at(i) != '.'; i++) {
		sum += s.at(i) - '0';
	}
	
	std::cout << "END -- Num=" << s << std::endl;
	std::cout << "END -- Sum=" << sum << std::endl;
	system("PAUSE");
	return 0;
}
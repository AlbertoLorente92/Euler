#include <iostream>
#include <string>
#include <math.h>
#include <list>

long long int when_n_is_even(const long long int n){
	return n/2L;
}

long long int when_n_is_not_even(const long long int n){
	return (3L*n)+1L;
}

int main(int argc, char* argv[]){
	long long int longest_seq,current_seq,n,longest_n;
	longest_seq = 0;
	for(long long int i = 2; i <= 1000000L; i+=1L){
		current_seq = 1L;
		n = i;
		while(n != 1L){
			if(n%2L==0){
				n = when_n_is_even(n);
			}else{
				n = when_n_is_not_even(n);
			}
			current_seq += 1L;
		}
		if(current_seq > longest_seq){
			longest_seq = current_seq;
			longest_n = i;
		}
	}

	std::cout	<< "END -- Num=" << longest_n << " Seq=" << longest_seq << std::endl;
	system("PAUSE");
	return 0;
}
#include <iostream>
#include <string>
#include <math.h>
#include <list>
#include <fstream>

const int TAM = 20;

void show_path(bool** path){
	std::cout	<< "Showing path..." << std::endl;
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(path[i][j]){
				std::cout	<< "1";
			}else{
				std::cout	<< "0";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void show_path(bool** path,long long int routes){
	std::ofstream file;
	file.open("exit.txt", std::ios_base::app | std::ios_base::out);
	file << "Route " << routes << std::endl;
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(path[i][j]){
				file	<< "1";
			}else{
				file	<< "0";
			}
		}
		file << std::endl;
	}
	file << std::endl;
	file.close();
}

long long int num_routes(int x,int y,bool** path){
	long long int routes = 0;
	path[x][y] = true;
	///show_path(path);

	if(x==TAM-1 && y==TAM-1){
		routes = 1;
	//	show_path(path,routes);
	}else{
		if(y+1<TAM && !path[x][y+1]){			//Go right
			routes += num_routes(x,y+1,path);
		}

		if(x+1<TAM && !path[x+1][y]){
			routes += num_routes(x+1,y,path);
		}		
	}
	path[x][y] = false;
	return routes;
}

long long int num_routes(bool** path){
	return num_routes(0,0,path);
}

int main(int argc, char* argv[]){
	long long int routes;
	bool** path = new bool*[TAM];
	for(int i = 0; i < TAM; i++){
		path[i] = new bool[TAM];
	}

	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			path[i][j] = false;
		}
	}
	//show_path(path);
	routes = num_routes(path);

	std::cout	<< "END -- Routes=" << routes << std::endl;
	system("PAUSE");
	return 0;
}
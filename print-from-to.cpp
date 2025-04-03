#include<iostream>

/*print numbers from to to*/
int main(){
	long from= 0, to= 0;
	std::cout<< "Enter range to print"<< std::endl;
	std::cin>> from>> to;
	while (from <= to) {
		if (from == to) std::cout<< from; else std::cout<< from<< ",";
		++from;
	}

	std::cout<< std::endl;

}

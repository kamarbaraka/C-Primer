#include<iostream>

/*get the sum of n to n..*/
int sum (int from, int to) {
	int sum= 0;
	while(from <= to){
		sum+= from;
		++from;
	}

	return sum;
}

int main () {
	std::cout<< "Enter range to iterate and sum;"<< std::endl;
	int from= 0, to= 0;
	std::cin>> from>> to;
	std::cout<< "The sum of "<< from<< " to "<< to<< " inclusive is "<< sum(from, to)<< std::endl;
}

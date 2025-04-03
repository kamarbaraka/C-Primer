#include<iostream>

/*count down from to to*/
void countDown (int from, int to) {
	while (from >= to) {
		if (from == to) std::cout<< from; else  std::cout<< from<< ", ";
	       --from;	
	}

}

int main () {
	std::cout<< "Enter the range to count down;"<< std::endl;
	int from= 0, to= 0;
	std::cin>> from>> to;
	std::clog<< "Counting down..."<< std::endl;
	countDown(from, to);
	std::cout<< std::endl;
}

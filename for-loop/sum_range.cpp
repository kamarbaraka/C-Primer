#include<iostream>

/*get the sum of a range of numbers*/
int sumRange (int from, int to) {
	int sum= 0;
	for (int countFrom= from; countFrom <= to; ++countFrom) sum+= countFrom;

	return sum;
}

/*get input from user and compute the sum of the range*/
int main (){
	std::cout<< "Enter the range to compute the sum;"<< std::endl;
	int from= 0, to= 0;
	std::cin >> from>> to;
	std::cout<< "The sum from "<< from<< " to "<< to<< " = "<< sumRange( from, to )<< std::endl;
}

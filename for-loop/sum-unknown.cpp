#include<iostream>

/*add numbers from input*/
int main () {
	//store the sum and input
	int sum= 0, val= 0;
	//get the input
	std::cout<< "Enter the numbers to sum up"<< std::endl;
	while (std::cin >> val) sum+= val;
	//output the sum
	std::cout<< "The sum is "<< sum<< std::endl;
}

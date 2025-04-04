#include<iostream>
#include<vector>


int sumRange(std::vector<int> range){
	int sum= 0;
	for (int index= 0; index < range.size(); ++index) sum+= range[ index ];
	return sum;
}

int main (){
	int val= 0;
	std::vector<int> range;
	std::cout<< "Enter the range of values to sum;"<< std::endl;
	while (std::cin>> val) range.push_back(val);
	std::cout<< "The sum is: "<< sumRange(range)<< std::endl;
 }

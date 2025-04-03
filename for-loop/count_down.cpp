#include<iostream>

/*count down a range of numbers*/
void countDown ( int from, int to, std::string direction= "down" ){
	if (direction == "up"){
		for (int countFrom= from; countFrom <= to; ++countFrom){
			if (countFrom == to) std::cout<< countFrom; else std::cout<< countFrom<< ", ";
		}
	}
	if (direction == "down"){
		for (int countFrom= from; countFrom >= to; --countFrom) if (countFrom == to) std::cout<< countFrom; else std::cout<< countFrom<< ", ";
	}
}

/*get the range and direction from the user*/
int main (){
	std::cout<< "Enter the range and direction for counting;"<< std::endl;
	int from= 0, to= 0;
	std::string direction;
	std::cin>> from>> to>> direction;
	std::cout<< "Counting "<< direction<< " from "<< from<< " to "<< to<< " .... "<< std::endl;
	countDown(from, to, direction);
	std::cout<< std::endl;
}

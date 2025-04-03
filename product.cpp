#include<iostream>

namespace prac {
	int prod (int a, int b) {
	
		return a* b;
	}

}

int main () {
	std::cout<< "Enter numbers to multiply;"<< std::endl;
	int a= 0, b= 0;
	std::cin>> a>> b;
	std::cout<< "The product of ";
	std::cout<< a<< " and "<< b<< " is ";
	std::cout<< prac::prod(a, b)<< std::endl;
}

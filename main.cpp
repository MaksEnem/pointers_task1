#include <iostream>

int main() {

	int number_1 = 23;
	int number_2 = 45;

	int* p_number_1 = &number_1;
	int* p_number_2 = &number_2;

	*p_number_1 = *p_number_1 + *p_number_2;
	*p_number_2 = *p_number_1 - *p_number_2;
	*p_number_1 = *p_number_1 - *p_number_2;

	std::cout << *p_number_1 << std::endl;
	std::cout << *p_number_2 << std::endl;
}

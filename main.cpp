#include<iostream>

int main(int argc, char* argv[]) {
	int value1 = 0;
	int a1(3);
	int a2 = { 3 };
	int a3{ 3 };
	
	value1 = 0B1001011;
	value1 = 0123;
	value1 = 0x9f;

	unsigned int value2;
	float value3;
	char c1 = 'A';
	c1 = '\101';
	c1 = '\x41';

	std::cout << "Hello, World" << std::endl;
	std::cout << "There are" << c1 << "ways\nl I love you" << std::endl;
	std::cout << "a\n" << "BC\nDEF\nGH" << std::endl;
}
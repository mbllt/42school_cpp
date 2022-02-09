#include <iostream>
#include <string>
#include <random>

class Base {public : virtual ~Base(){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void) {
	srand (time(NULL));
	int random = rand() % 3;

	switch (random) {
		case (1):
			std::cout << "Generating class A" << std::endl;
			return new A;
		case (2):
			std::cout << "Generating class B" << std::endl;
			return new B;
	}
	std::cout << "Generating class C" << std::endl;
	return new C;
}

void identify(Base* p) {
	A * testA = dynamic_cast<A *>(p);
	if (testA) {
		std::cout << "The Base is type A." << std::endl;
		return ;
	}
	B * testB = dynamic_cast<B *>(p);
	if (testB) {
		std::cout << "The Base is type B." << std::endl;
		return ;
	}
	C * testC = dynamic_cast<C *>(p);
	if (testC) {
		std::cout << "The Base is type C." << std::endl;
		return ;
	}
}

void identify(Base& p) {
	try {
		A &	testA = dynamic_cast<A &>(p);
		std::cout << "The Base is type A." << std::endl;
		(void)testA;
	}
	catch (std::bad_cast & bc) {
		try {
			B &	testB = dynamic_cast<B &>(p);
			std::cout << "The Base is type B." << std::endl;
			(void)testB;
		}
		catch (std::bad_cast & bc) {
				try {
					C &	testC = dynamic_cast<C &>(p);
					std::cout << "The Base is type C." << std::endl;
					(void)testC;
				}
				catch (std::bad_cast & bc) {
					std::cout << bc.what() << std::endl;
				}
		}
	}
}

int	main(void) {
	Base * test = generate();
	identify(test);
	identify(*test);
	delete test;
	return 0;
}
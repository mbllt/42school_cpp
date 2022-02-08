#include <iostream>
#include <string>

typedef struct s_data {
	std::string	name;
	int			age;
}	Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int	main(void) {

	Data	src;
	src.name = "Scooby Doo";
	src.age = 7;
	std::cout << "src name : " << src.name
		<< ", src age : " << src.age << std::endl;
	std::cout << "src addr : " << &src << std::endl;

	Data *	dest;
	dest = deserialize(serialize(&src));
	std::cout << "dest name : " << dest->name
		<< ", dest age : " << dest->age << std::endl;
	std::cout << "dest addr : " << dest << std::endl;
	return 0;
}
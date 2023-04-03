#include <iostream>
#include <string>

class Pie {
public:
	virtual std::string description() const = 0;
	virtual ~Pie() {}
};

class ApplePie : public Pie {
public:
	std::string description() const override {
		return "Apple Pie";
	}
};

class RaspberryPie : public Pie {
public:
	std::string description() const override {
		return "Raspberry Pie";
	}
};

int main() {
	// Create an instance of ApplePie
	ApplePie p1;
	std::cout << p1.description() << std::endl;

	Pie* piePtr = nullptr;

	int choice;
	std::cout << "Which type of pie would you like?" << std::endl;
	std::cout << "1. Apple Pie" << std::endl;
	std::cout << "2. Raspberry Pie" << std::endl;
	std::cin >> choice;

	switch (choice) {
	case 1:
		piePtr = new ApplePie();
		break;
	case 2:
		piePtr = new RaspberryPie();
		break;
	default:
		std::cout << "Invalid choice" << std::endl;
		return 1;
	}
	std::cout << piePtr->description() << std::endl;

	// Free memory allocated for the pie object
	delete piePtr;

	return 0;
}
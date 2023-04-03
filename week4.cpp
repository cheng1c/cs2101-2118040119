#include <iostream>
#include <set>
#include <map>
#include <string>

int main() {
	std::set<int> numbers;
	int num;
	std::cout << "Enter a set of numbers (enter a negative number to stop):\n";
	while (std::cin >> num && num >= 0) {
		numbers.insert(num);
	}

	int check_num;
	std::cout << "Enter a number to check if it is in the set: ";
	std::cin >> check_num;
	if (numbers.count(check_num)) {
		std::cout << check_num << " is in the set.\n";
	}
	else {
		std::cout << check_num << " is not in the set.\n";
	}

	int erase_num;
	std::cout << "Enter a number to erase from the set: ";
	std::cin >> erase_num;
	if (numbers.count(erase_num)) {
		numbers.erase(erase_num);
		std::cout << erase_num << " has been removed from the set.\n";
	}
	else {
		std::cout << erase_num << " is not in the set.\n";
	}

	std::map<int, std::string> string_map;
	for (int n : numbers) {
		std::cout << "Enter a string to associate with " << n << ": ";
		std::string str;
		std::cin >> str;
		string_map[n] = str;
	}

	std::cout << "Contents of the std::map:\n";
	for (const auto& kv : string_map) {
		std::cout << kv.first << "\t" << kv.second << "\n";
	}

	int display_num;
	std::cout << "Enter a number to display its associated string: ";
	std::cin >> display_num;
	while (string_map.count(display_num) == 0) {
		std::cout << "That number is not in the map. Please try again: ";
		std::cin >> display_num;
	}
	std::cout << "The string associated with " << display_num << " is \"" << string_map[display_num] << "\".\n";

	std::cout << "Enter a new string to associate with " << display_num << ": ";
	std::string new_str;
	std::cin >> new_str;
	string_map[display_num] = new_str;
	std::cout << "The new string associated with " << display_num << " is \"" << string_map[display_num] << "\".\n";

	return 0;
}

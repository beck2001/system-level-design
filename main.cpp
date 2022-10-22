#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>

int main() {
	std::ifstream input("input.txt");
	std::ofstream output("output.txt");
	std::vector<std::string> lines;
	if (input) {
		std::string line;
		while (getline(input, line)) {
			lines.push_back(line);
		}
	}
	std::sort(lines.begin(), lines.end());
	for (const auto& line : lines) {
		output << line << std::endl;
	}
	return 0;
}

#include <iostream>
#include <sstream>


int main(void)
{
	const std::string str { "the quick brown fox jumps over the lazy dog" };
	std::istringstream iss { str };
	std::string token;

	std::cout << "Sentence: " << '"' << iss.str() << "\"\n";

	std::cout << "Tokens:\n";
	while (iss >> token) {
		std::cout << "- \"" << token << "\"\n";
	}

	return 0;
}

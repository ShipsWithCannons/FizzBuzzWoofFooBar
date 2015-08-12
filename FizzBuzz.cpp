#include "FizzBuzz.h"

int main(int argc, char* argv[])
{
	int iMax;
	try {
		iMax = std::stoi(argv[1]);
	}
	catch (...) {
		std::cout << "Exception " << '\n';
	}
	if (argc < 2) {
		std::cout << "No arguments are given." << '\n';
		throw EXIT_FAILURE;
	}

	const static IntStrDict FizzDict = {
		{ 3, "Fizz" },
		{ 5, "Buzz" },
		{ 7, "Woof" },
		{ 11, "Foo" },
		{ 13, "Bar" }
	};

	for (int i = 1; i < iMax; ++i)
	{
		printString(FizzBuzzer(i, FizzDict));
	}
}
#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

typedef std::map<int, std::string> IntStrDict;

void printString(std::string tString)
{
	std::cout << tString << '\n';
}

std::string ifEmpty(int i, std::string tString)
{
	if (tString.empty())
	{
		tString += std::to_string(i);
	}
	return tString;
}

std::string checkModZero(int i, IntStrDict tDict)
{
	std::string tString;
	for (auto const &j : tDict)
	{
		if (i % j.first == 0)
		{
			tString += j.second;
		}
	}
	return tString;
}

std::vector<int> getFizzPrimes(int size)	// getPrimes should also return '2', but we're only interested in 3 and higher so getFizzPrimes
{
	std::vector<int> primes;
	int j = 1;							// Magic number.
	for (int i = 0; i <= size; ++i)
	{
		bool foundPrime = false;
		while (!foundPrime)
		{
			for (auto it = primes->begin(); it != primes->end(); it++)
			{
				if (*it > j / 2)
				{
					primes.push_back(it);
					break;
				}

				if (j % *it == 0)
				{
					break;
				}
			}
			j += 2;						// Note this skips 2.
		}
	}
}

std::string FizzBuzzer(int i, const IntStrDict & tDict)
{
	std::string print;

	print = checkModZero(i, tDict);
	print = ifEmpty(i, print);
	return print;
}

#endif // fizzbuzz

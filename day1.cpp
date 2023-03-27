#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

#include "day1.hpp"

std::string readinputday1() {
	std::ifstream in("/home/karlg/dev/CppTest/AdventOfCode2015/1.txt");
	
	std::string input;
	getline(in, input);
	return input;
}

void part1day1() {
	std::string input = readinputday1();
	
	int layer = 0;
	for (unsigned int i = 0; i < input.size(); i++) {
		char c = input[i];
		if (c == '(')
			layer ++;
		if (c == ')')
			layer --;
	}
	
	std::cout << layer << std::endl;
}

void part2day1() {
	std::string input = readinputday1();
	
	int layer = 0;
	for (unsigned int i = 0; i < input.size(); i++) {
		char c = input[i];
		if (c == '(')
			layer++;
		if (c == ')')
			layer--;
		if (layer == -1) {
			std::cout << i+1 << std::endl;
			break;
		}
	}
}


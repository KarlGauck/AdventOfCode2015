#include <string>
#include <fstream>
#include <list>
#include <iostream>

#include "day2.hpp"

std::list<std::string> readinputday2() {
	std::ifstream in("/home/karlg/dev/CppTest/AdventOfCode2015/2");
	
	std::string str;
	std::list<std::string> list;
	if (in.is_open()) {
		while(getline(in, str)) {
			list.push_front(str);
		}
	}
	return list;
}

void part1day2() {
	std::list<std::string> input = readinputday2();
	
	for (std::string line: input) {
		std::cout << line << std::endl;
	}
}

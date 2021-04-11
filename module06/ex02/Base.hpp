#pragma once

#include <iostream>
#include <string>

class Base {
	public:
		std::string _type;

		Base() : _type("Base") {}
		Base(const std::string &type) : _type(type) {}
		virtual ~Base() {}
};
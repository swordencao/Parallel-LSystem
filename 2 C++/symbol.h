#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <vector>

class Symbol{
	friend std::ostream& operator<<(std::ostream& output, const Symbol& s);

	private:
		char character;
		std::vector<double> parameters;

	public:
		Symbol();
		Symbol(const char c);
		Symbol(const char c, const int n);
		Symbol(const char c, std::vector<double> v);
		Symbol(const char c, const double p[], int n);
		~Symbol(){};

		bool operator == (const Symbol &other) const;

};

#endif


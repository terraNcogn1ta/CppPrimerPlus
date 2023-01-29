// studentc.h -- defining a Student class using private inheritance
#pragma once

#include <iostream>
#include <string>
#include <valarray>

class Student : std::valarray<double>, std::string {
private:
	typedef std::valarray<double> ArrayDb;

	// private method for scores output

	std::ostream& arr_out(std::ostream& os) const;
public:
	Student() : std::string("Null Student"), ArrayDb() {} //using class name instead of variable name in private inheritance

	explicit Student(const std::string& s) : std::string(s), ArrayDb() {}

	explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}

	Student(const std::string& s, int n) : std::string(s), ArrayDb(n) {}

	Student(const std::string& s, const ArrayDb& a) : std::string(s), ArrayDb(a) {}

	Student(const char* str, const double* pd, int n) : std::string(str), ArrayDb(pd, n) {}

	~Student() {}

	double Average() const;
	const std::string& Name() const;
	double& operator[](int i);
	double operator[](int i) const;


	// friends

	// input
	friend std::istream& operator>>(std::istream& is, Student& stu); // 1 word
	friend std::istream& getline(std::istream& is, Student& stu); // 1 line

	// output
	friend std::ostream& operator<<(std::ostream& os, const Student& stu);
};

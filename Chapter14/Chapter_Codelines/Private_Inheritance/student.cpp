// studentc.cpp -- Student class using containment
#include "student.h"

using std::ostream;
using std::endl;
using std::istream;
using std::string;

//public methods
double Student::Average() const {
	if (ArrayDb::size() < 0)
		return 0;
	return ArrayDb::sum() / ArrayDb::size();
}

const string& Student::Name() const {
	//return name;
	return static_cast<const std::string &> (*this); // to get the inherited component, use the casting. casting of *this to std::string yields the "std::string" portion of the class
}

double& Student::operator[](int i) {
	//return scores[i];
	return (static_cast<ArrayDb&> (*this))[i]; 

}

double Student::operator[](int i) const {
	return (static_cast<const ArrayDb &>(*this))[i];
}

// private method
ostream& Student::arr_out(ostream& os) const {
	int i;
	int lim = ArrayDb::size();
	if (lim > 0) {
		for (i = 0; i < lim; i++) {
			os << ((ArrayDb &)(*this))[i] << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << " empty array ";
	return os;
}
// friends

// use string version of operator>>()

/*
The reference stu doesn’t get converted automatically to a string reference.
The fundamental reason is that with private inheritance,a reference or pointer to a base class cannot be assigned a reference or pointer 
to a derived class without an explicit type cast
*/

istream& operator>>(istream& is, Student& stu) {
	is >> static_cast<std::string&>(stu); 
	return is;
}

// use string friend getline(ostream &, const string &)
istream& getline(istream& is, Student& stu) {
	getline(is, static_cast<std::string&>(stu));
	return is;
}

// use string version of operator<<()
ostream& operator<<(ostream& os, const Student& stu) {
	os << "Scores for " << static_cast<const std::string&>(stu) << ":\n";
	stu.arr_out(os); // use private method for scores
	return os;
}
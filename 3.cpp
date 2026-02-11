#include <iostream>

double zero() {
	double zer = 1.0;
	while (zer / 2.0 > 0.0) {
	    std::cout<<zer<<std::endl;
		zer /= 2;
	}
	return zer;
}

double epstielon() {
	double epst = 1.0;
	while (epst + 1 > 1.0) {
		epst /= 2;
	}
	return epst * 2;
}

int main() {
	std::setlocale(LC_ALL, "RU");
	std::cout << "Машинный ноль: " << zero() << std::endl;
	std::cout << "Машинный эпстилон: " << epstielon() << std::endl;
	return 0;
}

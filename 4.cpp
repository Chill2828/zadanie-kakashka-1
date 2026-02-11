#include <iostream>
#include <cmath>
#include <random>

int main(){
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 10.0);

	const int dl = 10;
	double masiv[dl];
	double vect = 0;
	for (int i=0;i<dl;i++){
		masiv[i]=dis(rd);

	}

	for(int i=0;i<dl;i++){
		masiv[i]=masiv[i]*masiv[i];
		vect +=masiv[i];
		
	}

    std::cout<<sqrt(vect)<<std::endl;

}

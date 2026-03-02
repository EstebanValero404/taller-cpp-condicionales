#include <iostream>

int main() {
	double celsius, total;
	int option;
	std::cin >> celsius;
	std::cout << "digite a que desea convertir su temperatura 1.fahrenheit\n 2.kelvin\n 3. rankine" << std::endl;
	std::cin >> option;
	if (option==1) {
		total=(((9/5)*celsius)+32);
		std::cout << total << std::endl;
	} 
	if (option==2){
total=celsius+273.15;
		std::cout << total << std::endl;
	}
	if (option==3){
	    total= (1.8*celsius)+491.67;
	    std::cout << total << std::endl;
	}
	return 0
}

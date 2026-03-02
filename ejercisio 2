#include <iostream>

int main(){
    	double a,b,c;
	std::cout << "no introduzca numeros negativos, ahora introduzca los 3 lados de su triangulo" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
		if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
		    std::cout << "triangulo valido" << std::endl;
		        	if (a==b && b==c && a==c){
		    std::cout << "tu triangulo es equilatero" << std::endl;
		} else if (a==b || a==c || c==b || c==a || b==a || b==c){
		    std::cout << "triangulo isoceles" << std::endl;
		} else
		std::cout << "triangulo escaleno" << std::endl;
		if (a*a+b*b==c*c){
		    std::cout << "triangulo rectangulo" << std::endl;
		} else if (a*a+b*b>c*c){
		    std::cout << "triangulo obstusangulo" << std::endl;
		} else 
		std::cout << "triangulo acutangulo" << std::endl;
		    
		}
		 else{
		    std::cout << "triangulo no valido" << std::endl;
		}
		
	return 0;
}

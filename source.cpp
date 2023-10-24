#include <iostream> 

int main() {
	int n = 0;
	do {
		std::cin >> n;
	} while (n < 0 || n>2000000);
	int vertex = 0; //вершина 
	int steps = n;

	while (n != 0) {
		if (n % 2 == 0) {
			n /= 2;
		}

		else {
			n = n * 3 + 1;
		}
		++steps;
		if (n > vertex) {
			vertex = n;

		}
		std::cout << steps << " " << vertex << std::endl;
		return 0;
	}
	
}
	


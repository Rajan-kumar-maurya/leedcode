                                                               #include <iostream> 
using namespace std; 
unsigned int factorial(unsigned int n) 
{ 
	int i = n, fact = 1; 
	while (n / i != n) { 
		fact = fact * i; 
		i--; 
	} 
	return fact; 
} 
int main() 
{ 
	int num = 5; 
	cout << "Factorial of "
		<< num << " is "
		<< factorial(num) << endl; 
	return 0; 
} 
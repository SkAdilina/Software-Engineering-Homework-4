#include <iostream>
#include "header.h"
   
int main()
{
	homework4 example;
	
	// EX 1
	// Write a class having two private variables and one member function which will return the area of the rectangle.
	int length, width;
	std::cout<<"Enter length of rectangle: \n";
	std::cin>>length;
	std::cout<<"Enter width of rectangle: \n";
	std::cin>>width;
	std::cout<<"Area of rectangle ---> "<<example.rectangle_area(length, width)<<'\n';
	
	// EX 2
	// Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers.
	int num1, num2;
	std::cout<<"Enter 2 numbers to add: \n";
	std::cin>>num1>>num2;
	example.create(num1, num2); 
	example.addition();
	
	// Ex 3
	// Perform addition operation on complex data using class and object. The program should ask for real and imaginary part of two complex numbers, and display the real and imaginary parts of their sum.
	int real1, real2, imaginary1, imaginary2;
	std::cout<<"Enter 2 real numbers: \n";
	std::cin>>real1>>real2;
	std::cout<<"Enter 2 complex numbers: \n";
	std::cin>>imaginary1>>imaginary2;
	example.addition_complex(real1, real2, imaginary1, imaginary2);
	
	return 0;
}

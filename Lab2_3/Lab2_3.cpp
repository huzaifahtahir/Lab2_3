// Lab2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Writing a C++ Program.  Stock Loss

#include "pch.h"
#include <iostream>

int main()
{
	
	double stockAmount = 750;
	double stockBought = 35;
	double stockSold = 31.15;

	//Total amount paid for the stock
	std::cout << "Total amount paid for stock: $" << stockAmount * stockBought << std::endl;
	std::cout << "Total amount recieved from selling stock: $" << stockAmount * stockSold << std::endl;
	std::cout << "Total amount of money she lost: $" << (stockAmount * stockBought) -
		(stockAmount * stockSold) << std::endl;


	return 0;




}
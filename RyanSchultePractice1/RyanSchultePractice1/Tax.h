
#include <string>
#pragma once
class Tax
{
public:
	Tax();
	float prodTax;
	double prodCost;
	int selection;
	double totalCost;
	double calculateProdTax(double prodCost, int selection);
};


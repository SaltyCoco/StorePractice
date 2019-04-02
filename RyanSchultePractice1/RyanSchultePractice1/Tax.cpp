#include "pch.h"
#include "Tax.h"
#include <string>
using namespace std;


double Tax::calculateProdTax(double prodCost, int selection) {

	switch (selection) {
	case 1: totalCost = (prodCost * 0.06) + prodCost;
		break;
	case 2: totalCost = (prodCost * 0.07) + prodCost;
		break;
	case 3: totalCost = (prodCost * 0.03) + prodCost;
		break;
	case 4: totalCost = (prodCost * 0.06) + prodCost;
		break;
	case 5: totalCost = (prodCost * 0.03) + prodCost;
		break;
	case 6: totalCost = (prodCost * 0.10) + prodCost;
		break;
	}
	return totalCost;
}			
#include "Product.h"

Product::Product(unsigned int aConsumption) : mConsumption(aConsumption) {
}

Product::~Product() {
}

bool Product::operator<(const Product& aProduct) {
	return cost() < aProduct.cost();
}

unsigned int Product::cost() {
	const Product& p = *this;
	return p.cost();
}

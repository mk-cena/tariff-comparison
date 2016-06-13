#include "ProductB.h"

ProductB::ProductB(unsigned int aConsumption) : Product(aConsumption) {}

const std::string ProductB::name() {
	return "Packaged tariff";
}

unsigned int ProductB::cost() const {
	return mConsumption <= 4000? 800 : 800 + (30 * (mConsumption - 4000)) / 100;
}
#include "ProductA.h"

ProductA::ProductA(unsigned int aConsumption) : Product(aConsumption) {}

const std::string ProductA::name() {
	return "basic electricity tariff";
}

unsigned int ProductA::cost() const {
	return  5 * 12 + (mConsumption * 22) / 100;
}
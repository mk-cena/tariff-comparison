#include "Products.h"
#include <iostream>
#include <algorithm>

void Products::add(std::unique_ptr<Product>&& aProduct) {
	mProducts.insert(std::unique_ptr<Product>(aProduct.release()));
}

std::size_t numOfDigits(std::size_t n) {
	std::size_t count = 0;
	while(n != 0) {
		n /= 10;
		count++;
	}
	return count;
}

void Products::print() {
	std::size_t len = 0;
	unsigned int m = 0;
	for(const auto& product : mProducts) {
		len = std::max(product->name().length(), len);
		m = std::max(product->cost(), m);
	}

	for(const auto& product : mProducts) {
		std::cout << "| "  << product->name();
		for(std::size_t i = 0; i <= len - product->name().length(); i++) {
			std::cout << " ";
		}
		std::cout << "|  " << product->cost();
		for(std::size_t i = 0; i <= numOfDigits(m) - numOfDigits(product->cost()); i++) {
			std::cout << " ";
		}
		std::cout << "|" << std::endl;
	}
}
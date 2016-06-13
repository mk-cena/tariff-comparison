#ifndef __PRODUCTS_H__
#define __PRODUCTS_H__

#include <memory>
#include <set>
#include "Product.h"

class Products {

public:
	void add(std::unique_ptr<Product>&& aProduct);
	void print();

private:
	std::multiset<std::unique_ptr<Product>> mProducts;

};

#endif
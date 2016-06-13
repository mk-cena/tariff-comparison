#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include <string>
#include <memory>

class Product {

public:
	Product(unsigned int aConsumption);
	virtual ~Product();
	bool operator<(const Product& aProduct);
	virtual const std::string name() = 0;
	virtual unsigned int cost() const = 0;
	unsigned int cost();

protected:
	unsigned int mConsumption;

};

inline bool operator<(const std::unique_ptr<Product>& aProduct1, const std::unique_ptr<Product>& aProduct2) {
	return *aProduct1 < *aProduct2;
}

#endif
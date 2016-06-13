#ifndef __PRODUCTB_H__
#define __PRODUCTB_H__

#include "Product.h"

class ProductB : public Product {

public:
	ProductB(unsigned int aConsumption);
	const std::string name() override;
	unsigned int cost() const override;
};

#endif
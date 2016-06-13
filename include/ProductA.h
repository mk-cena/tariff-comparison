#ifndef __PRODUCTA_H__
#define __PRODUCTA_H__

#include "Product.h"

class ProductA : public Product {

public:
	ProductA(unsigned int aComparison);
	const std::string name() override;
	unsigned int cost() const override;
};

#endif

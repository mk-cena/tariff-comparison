#include "Products.h"
#include "ProductA.h"
#include "ProductB.h"


int main() {
	Products products;

	products.add(std::unique_ptr<Product>(new ProductB(6000)));
	products.add(std::unique_ptr<Product>(new ProductA(3500)));
	products.add(std::unique_ptr<Product>(new ProductB(4500)));	
	products.add(std::unique_ptr<Product>(new ProductA(6000)));	
	products.add(std::unique_ptr<Product>(new ProductA(4500)));			
	products.add(std::unique_ptr<Product>(new ProductB(3500)));		
	
	products.print();		
}
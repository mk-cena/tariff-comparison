
cmake_minimum_required (VERSION 3.4)

project (Tariff-Comparison CXX)

set(src
	src/Product.cpp
	src/ProductA.cpp
	src/ProductB.cpp
	src/Products.cpp)

include_directories(
	./
	./include)

add_executable(tariff-comparison main.cpp ${src})
target_compile_options(tariff-comparison PRIVATE -std=c++11)
set_target_properties(tariff-comparison PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../)
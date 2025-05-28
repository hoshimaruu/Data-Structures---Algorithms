#include <iostream>
#include <vector>

/*
    Problem Statement: 
        You are given a vector of Product objects. Each product has:
            - a name (std::string)
            - a price (double)
        Write an insertion sort to sort the products:
            - By ascending price
            - If two products have the same price, sort by shorter name length
            - If still equal, sort alphabetically

    Requirements:
        Use a custom struct Product
        Implement insertion sort
        Do not use std::sort
*/

struct Product {
    std::string name;
    double price;
};

void insertionSortProducts(std::vector<Product>& products) {
    if (products.empty()) return;

    for (int i = 1; i < products.size(); ++i) {
        auto key = products[i];
        int j = i - 1;
        std::string names = products[i].name;

        while (j >= 0 && (
            products[j].price > key.price || 
            (products[j].price == key.price 
                && products[j].name.length() > key.name.length()) || 
            (products[j].price == key.price 
                && products[j].name.length() == key.name.length() 
                && products[j].name > key.name)
            )) {
                        products[j+1] = products[j];
                        j--;
        }
        products[j+1] = key;
    }
}

int main() {
    std::vector<Product> products = {
        {"Banana", 1.5},
        {"Apple", 1.5},
        {"Pear", 1.0},
        {"Avocado", 1.5},
        {"Orange", 1.0}
    };

    insertionSortProducts(products);

    for (const auto& product : products) {
        std::cout << product.name << " ($" << product.price << ")\n";
    }

    return 0;
}
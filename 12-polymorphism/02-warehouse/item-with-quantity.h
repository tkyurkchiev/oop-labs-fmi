#ifndef ITEM_WITH_QUANTITY_H
#define ITEM_WITH_QUANTITY_H

#include <iostream>
#include <stdexcept>
#include <cstring>

class ItemWithQuantity 
{
protected:
    char* name;
    double price;
    int quantity;

public:
    ItemWithQuantity(const char* name, double price, int quantity = 0);

    virtual double get_item_price() const;
    double get_total_price() const;

    void add_quantity(int quantity);
    void remove_quantity(int quantity);

    void print_statistics() const;
};

#endif
#pragma once
#ifndef SALESDATA_H
#define SALESDATA_H

#include "Transaction.h"
#include <vector>

class SalesData {
private:
    float totalSales;
    std::vector<Transaction> salesRecords;

public:
    SalesData();
    float getDailySales() const;
    float getSalesByProduct(int productID) const;
    std::vector<Transaction> generateSalesReport() const;
    void addTransaction(const Transaction& transaction);
    void displaySalesData() const;
};

#endif // SALESDATA_H

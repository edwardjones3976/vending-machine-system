#include "SalesData.h"
#include "Transaction.h"
#include <iostream>

using namespace std;

SalesData::SalesData() : totalSales(0.0f) {}

float SalesData::getDailySales() const {
    return totalSales;
}

float SalesData::getSalesByProduct(int productID) const {
    float productSales = 0.0f;
    for (const auto& transaction : salesRecords) {
        if (transaction.getProductID() == productID) {
            productSales += transaction.getAmountPaid();
        }
    }
    return productSales;
}

vector<Transaction> SalesData::generateSalesReport() const {
    return salesRecords;
}

void SalesData::addTransaction(const Transaction& transaction) {
    salesRecords.push_back(transaction);
    totalSales += transaction.getAmountPaid();
}

void SalesData::displaySalesData() const {
    cout << "Total Sales: $" << totalSales << "\n";
    for (const auto& transaction : salesRecords) {
        cout << "Transaction ID: " << transaction.getProductID()
            << ", Amount Paid: $" << transaction.getAmountPaid()
            << ", Status: " << transaction.getStatus() << "\n";
    }
}

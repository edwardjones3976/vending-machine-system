#include "Admin.h"
#include "SalesData.h"
#include <iostream>

Admin::Admin(int id, std::string code) : adminID(id), accessCode(code), loginStatus(false) {}

bool Admin::login(std::string accessCode) {
    if (this->accessCode == accessCode) {
        loginStatus = true;
        std::cout << "Login successful.\n";
        return true;
    }
    std::cout << "Login failed.\n";
    return false;
}

SalesData Admin::monitorSalesData() {
    if (loginStatus) {
        std::cout << "Accessing sales data...\n";
        SalesData salesData;  // Assuming default initialization
        return salesData;
    }
    else {
        std::cout << "Login required to access sales data.\n";
        return SalesData();  // Return an empty object if not logged in
    }
}

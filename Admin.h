#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include "SalesData.h"

class Admin {
private:
    int adminID;
    std::string accessCode;
    bool loginStatus;

public:
    Admin(int id, const std::string& code);
    bool login(const std::string& accessCode);
    SalesData monitorSalesData();
};

#endif

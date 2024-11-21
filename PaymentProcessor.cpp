#include "PaymentProcessor.h"
#include <iostream>

using namespace std;

PaymentProcessor::PaymentProcessor() : totalAmount(0.0f) {}

bool PaymentProcessor::validateCurrency(float inputAmount) {
    return inputAmount > 0;
}

bool PaymentProcessor::processPayment(float amount) {
    if (validateCurrency(amount)) {
        totalAmount += amount;
        return true;
    }
    return false;
}

float PaymentProcessor::returnChange(float changeAmount) {
    if (changeAmount <= totalAmount) {
        totalAmount -= changeAmount;
        return changeAmount;
    }
    return 0.0f;
}

bool PaymentProcessor::cancelPayment() {
    totalAmount = 0.0f;
    return true;
}

void PaymentProcessor::displayPaymentDetails() const {
    cout << "Total Amount Processed: $" << totalAmount << "\n";
}

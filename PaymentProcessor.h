#pragma once
#ifndef PAYMENTPROCESSOR_H
#define PAYMENTPROCESSOR_H

class PaymentProcessor {
private:
    float totalAmount;

public:
    PaymentProcessor();
    bool validateCurrency(float inputAmount);
    bool processPayment(float amount);
    float returnChange(float changeAmount);
    bool cancelPayment();
    void displayPaymentDetails() const;
};

#endif // PAYMENTPROCESSOR_H

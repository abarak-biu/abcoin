#pragma once
#include <vector>
#include <string>
#include "crypto.h"

#include "easylogging++.h"

//test

namespace ab::bitcoin::core 
{

struct CurrencyAmount {
    float val;
};

class Address {
    std::string val; 
};

class Input {
    Address addr_;
    CurrencyAmount value_;
    ab::bitcoin::crypto::Signature sig_;

};

class Output {
    Address addr_;
    CurrencyAmount value_;

};

class Transaction {

std::vector<Input> inputs;
std::vector<Output> outputs;

};


} 

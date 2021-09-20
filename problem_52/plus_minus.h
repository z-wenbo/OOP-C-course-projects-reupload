#pragma once
#include "operation.h"

class Plus : public OperationNodeTwo {

public:
    Plus(string name, Node *x1, Node *x2) : OperationNodeTwo(name, x1, x2) {}

    void UpdateValue() override;

};

class Minus : public OperationNodeTwo {

public:
    Minus(string name, Node *x1, Node *x2) : OperationNodeTwo(name, x1, x2) {}


    void UpdateValue() override;

};

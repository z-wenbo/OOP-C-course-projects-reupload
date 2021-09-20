#pragma once
#include <string>

class Student {
private:
 std::string name;

public:
    Student(std::string name) : name(name), present(0),total(0) { }
    Student(){ }
    std::string getName();
    int getPresentTimes();
    int getAbsentTimes();
    int present;
    int total;
};
std::string Student::getName(){
    return name;
}

int Student::getPresentTimes(){
    return present;
}

int Student::getAbsentTimes(){
    return total-present;
}


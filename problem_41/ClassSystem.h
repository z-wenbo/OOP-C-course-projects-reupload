#pragma once
#include <string>
#include"Student.h"

class ClassSystem {
 
public:
    ClassSystem():last(0){ }
    void addStudent(Student);
    void addClassNumber( );
    void signIn(std::string);
    Student& getStudentById(int);
    Student& getStudentByName(std::string);
    Student member[300];
    int last=0;
};



void ClassSystem::addStudent(Student stu){
    member[last]=stu;
    ++last;
}

void ClassSystem::addClassNumber( ){
    for (int i=0; i <last; i++)
    {
        member[i].total++;
    }
}

void ClassSystem::signIn(std::string name){
    for (int i = 0; i < last; i++)
    {
        if (name==member[i].getName())
        {
            member[i].present++;
        }
        
    }
}
Student& ClassSystem::getStudentById(int id){
    return member[id];
}

Student& ClassSystem::getStudentByName(std::string name){
    for (int i = 0; i < last; i++)
    {
       if (name==member[i].getName()){
           return member[i];
       }
    }
    
}


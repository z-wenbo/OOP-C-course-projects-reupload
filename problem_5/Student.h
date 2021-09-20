#pragma once
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

class Student{
private:

 std::string name;
 int Chinese;
 int Math;
 int English;

public:
    Student(){}
    friend bool operator< (Student& a, Student& b);
    friend std::ostream& operator<< (std::ostream& out, Student& a);
    std::string getName();
    void editChinese(std::string mark);
    void editMath(std::string mark);
    void editEnglish(std::string mark);
    void editName(std::string mark);
    int getc();
    int getm();
    int gete();
};

string Student::getName(){
    return name;
}

void Student::editChinese(string mark){
  int a=atoi(mark.c_str());
  Chinese=a;
}

void Student::editMath(string mark){
  int a=atoi(mark.c_str());
  Math=a;
}

int Student::getc(){
  return Chinese;
}

int Student::getm(){
  return Math;
}

int Student::gete(){
  return English;
}


void Student::editEnglish(string mark){
  int a=atoi(mark.c_str());
  English=a;
}

void Student::editName(std::string Name){
  name=Name;
}

bool operator< (Student& a, Student& b){
  if((a.getc()+a.getm()+a.gete())<(b.getc()+b.getm()+b.gete()))
  return true;
  else if((a.getc()+a.getm()+a.gete())>(b.getc()+b.getm()+b.gete()))
  return false;
  else if(a.getc()<b.getc())
  return true;
  else if(a.getc()>b.getc())
  return false;
  else if(a.getm()<b.getm())
  return true;
  else if(a.getm()>b.getm())
  return false;
  else if(a.gete()<b.gete())
  return true;
  else 
  return false;
  
}

ostream& operator<< (ostream& out, Student& a){
    out<<a.getName()<<"-Total-"<<a.getc()+a.getm()+a.gete()<<"-Chinese-"<<a.getc()<<"-Math-"<<a.getm()<<"-English-"<<a.gete();
    return out;
}




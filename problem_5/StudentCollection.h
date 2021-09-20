#pragma once
#include <string>
#include"Student.h"
#include <iostream>
#include <cstdio>
using namespace std;
class StudentCollection{
private:
 Student member[100];
 int last=0;
 
public:
    StudentCollection() { }
    Student& operator[] (std::string name);
    friend std::istream& operator>> (std::istream& in, StudentCollection& sc);
    friend std::ostream& operator<< (std::ostream& out, StudentCollection& sc);
    void sortByScore();
};

Student& StudentCollection::operator[] (std::string name){
  for (int i = 0; i < last; i++) {
      	if (name==member[i].getName()) 
        return member[i];
    	}
      member[last].editName(name);
      return member[last++];
}

istream& operator>> (istream& in, StudentCollection& sc){
    std::string::size_type pos;
    string str,name,subject,mark;
    cin>>str;
    str+="-";
    int i=0;
    pos=str.find("-",i);
    name=str.substr(i,pos-i);
    i=pos+1;
    pos=str.find("-",i);
    subject=str.substr(i,pos-i);
    i=pos+1;
    pos=str.find("-",i);
    mark=str.substr(i,pos-i);
    if (subject=="Chinese")
    {
      sc[name].editChinese(mark);
    }
    else if (subject=="Math")
    {
      sc[name].editMath(mark);
    }
    else if (subject=="English")
    {
      sc[name].editEnglish(mark);
    }
    return in;
}

void StudentCollection::sortByScore(){

    for (int i = 0; i < last - 1; i++) {
        bool isSwap = false; 
        for (int j = 0; j < last - i - 1; j++) {
            if (member[j] < member[j + 1]) {
                Student temp = member[j];
                member[j] = member[j + 1];
                member[j + 1] = temp;
                isSwap = true;
            }
        }

        if(!isSwap) return;
    }
}

ostream& operator<< (ostream& out, StudentCollection& sc){
  for (int i = 0; i < sc.last; i++)
  {
    out<<sc.member[i].getName()<<"-Total-"<<sc.member[i].getc()+sc.member[i].getm()+sc.member[i].gete()<<"-Chinese-"<<sc.member[i].getc()<<"-Math-"<<sc.member[i].getm()<<"-English-"<<sc.member[i].gete()<<endl;
  }    
  return out;
}
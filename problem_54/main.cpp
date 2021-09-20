#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Student{
public:
    string name,birthday,tel,email;
    Student(){}
};

int main() {
    string number,year,month,day;
    getline(cin, number);
    int n=stoi(number);
    Student *q=new Student[n];
    regex e1(R"(([0-9]{4})([.])([0-9]{1,2})[.]([0-9]{1,2})|([0-9]{4})-([0-9]{1,2})-([0-9]{1,2}))");
    regex e2(R"([0-9]{11})");
    regex e3(R"(\w[-\w.+]*@([A-Za-z0-9][-A-Za-z0-9]+\.)+[A-Za-z]{2,14})");
    regex e0(R"(([a-zA-z]{1,})[.])");
    smatch name,birthday,tel,email;
    for (int i=0; i<n; ++i) {
        string info;
        getline(cin, info);
        regex_search(info,name,e0);
        regex_search(info,birthday,e1);
        regex_search(info,tel,e2);
        regex_search(info,email,e3);
        string name_=name[1].str();
        if(birthday[2].str()=="."){
            if(stoi(birthday[3].str())<10)
        month="0"+birthday[3].str();
        else month=birthday[3].str();
        if(stoi(birthday[4].str())<10)
        day="0"+birthday[4].str();
        else day=birthday[4].str();
            year=birthday[1].str();
        }
        else {
            if(stoi(birthday[6].str())<10)
            month="0"+birthday[6].str();
            else month=birthday[6].str();
            if(stoi(birthday[7].str())<10)
            day="0"+birthday[7].str();
            else day=birthday[7].str();
            year=birthday[5].str();
        }
        q[i].name=name_;
        q[i].birthday=year+"."+month+"."+day;
        q[i].tel=tel[0];
        q[i].email=email[0];
    }
    
    for(int i=1;i<n;i++)
    {
            Student key = q[i];
            int j = i - 1;
        while(j >= 0 && key.birthday  < q[j].birthday){
                    q[j+1] = q[j];
                    j--;
            }
            q[j+1] = key;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<q[i].name<<"-"<<q[i].birthday<<"-"<<q[i].tel<<"-"<<q[i].email<<endl;
    }
 
    return 0;
}

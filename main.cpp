#include <iostream>
#include <fstream>
using namespace std ;

struct Department{
    string id;
    string name;
    string manager;

    Department(string id, string name, string manager){
        this->id = id;
        this->name = name;
        this->manager = manager;
    }

    void store(){
        string entry = this->id+"|"+this->name+"|"+this->manager;
        int length = entry.length();
        string lengthEntry = to_string(length);
        if (lengthEntry.length() < 2)
            lengthEntry = "0"+lengthEntry;
        fstream file;
        file.open("department_data.txt",ios::out | ios::app);
        file << lengthEntry << entry;
        file.close();
    }

};

struct Employee{
    string id;
    string dept_id;
    string name;
    string position;

    Employee(string id, string dept_id,string name, string position){
        this->id = id;
        this->dept_id = dept_id;
        this->name = name;
        this->position = position;
    }

    void store(){
        string entry = this->id+"|"+this->dept_id+"|"+this->name+"|"+this->position;
        int length = entry.length();
        string lengthEntry = to_string(length);
        if (lengthEntry.length() < 2)
            lengthEntry = "0"+lengthEntry;
        fstream file;
        file.open("employee_data.txt",ios::out | ios::app);
        file << lengthEntry << entry;
        file.close();
    }

};

int main()
{
    Department d1("1","CS","Ahmed");
    d1.store();
    Department d2("2","IS","Mohamed");
    d2.store();

    Employee e1("1","1","Adham","Manager");
    e1.store();
    Employee e2("2","1","Omar","Employee");
    e2.store();
    Employee e3("3","2","Abdelrahman","Manager");
    e3.store();
}

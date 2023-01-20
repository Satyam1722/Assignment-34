#include<iostream>
#include<string>
#include<cstdio>
#include<fstream>

using namespace std;

class Emp
{
    int id;
    string name;
    string address;
    string dept;
    int phone;
    int age;

    public:

    void print(){
        cout<<"ID-> "<<id<<endl;
        cout<<"NAME-> "<<name<<endl;
        cout<<"ADDRESS-> "<<address<<endl;
        cout<<"DEPARTMENT-> "<<dept<<endl;
        cout<<"PHONE-> "<<phone<<endl;
        cout<<"AGE-> "<<age<<endl;
        cout<<"######################################";
    }

    void add(){
        cout<<"enter id : ";
        cin>>id;
        cin.ignore();
        cout<<"enter name : ";
        getline(cin,name);
        cin.ignore();
        cout<<"enter department : ";
        getline(cin,dept);
        cout<<"enter phone number : ";
        cin>>phone;
        cout<<"enter age : ";
        cin>>age;

        ofstream fout;
        if(dept.compare("Admin")==0)
        fout.open("Adm");
        if(dept.compare("Sales")==0)
        fout.open("Sal");
        if(dept.compare("Production")==0)
        fout.open("Pro");
        if(dept.compare("IT")==0)
        fout.open("IT");

        fout<<endl<<id;
        fout<<endl<<name;
        fout<<endl<<address;
        fout<<endl<<dept;
        fout<<endl<<phone;
        fout<<endl<<age;

        fout.close();
    }

    void printAll()
    {
        ifstream fin;
        fin.open("Adm.dat");
        
        Emp e;
        while(!fin.eof())
        {
            fin>>e.id;
            fin.ignore();
            getline(fin,e.name);
            fin.ignore();
            getline(fin,e.address);
            fin.ignore();
            getline(fin,e.dept);
            fin>>e.phone;
            fin>>e.age;

            e.print();
        }
        fin.close();
         
         
         fin.open("Sal.dat");

        while(!fin.eof())
        {
            fin>>e.id;
            fin.ignore();
            getline(fin,e.name);
            fin.ignore();
            getline(fin,e.address);
            fin.ignore();
            getline(fin,e.dept);
            fin>>e.phone;
            fin>>e.age;

            e.print();
        }
        fin.close();

         fin.open("Pro.dat");

        while(!fin.eof())
        {
            fin>>e.id;
            fin.ignore();
            getline(fin,e.name);
            fin.ignore();
            getline(fin,e.address);
            fin.ignore();
            getline(fin,e.dept);
            fin>>e.phone;
            fin>>e.age;

            e.print();
        }
        fin.close();

        fin.open("IT.dat");
         
        while(!fin.eof())
        {
            fin>>e.id;
            fin.ignore();
            getline(fin,e.name);
            fin.ignore();
            getline(fin,e.address);
            fin.ignore();
            getline(fin,e.dept);
            fin>>e.phone;
            fin>>e.age;

            e.print();
        }
        fin.close();
    }
};

int main()
{
    int choice;
    Emp e;
    while(true)
    {
        puts("1. Add Employee");
        puts("2. Print All Employees");
        cin>>choice;

        switch(choice)
        {
            case 1:
            e.add();
            break;
            case 2:
            e.printAll();
            break;
            default:
            return 0;
        }
    }

    return 0;
}
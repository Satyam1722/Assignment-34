#include<iostream>
#include<string>
#include<cstdio>
#include<fstream>
#include<stdlib.h>
using namespace std;

class Employee{
    int no;
    string name;
    public:

    void addEmployee(){
        ofstream fout;
        fout.open("file.txt",ios::app);

        puts("enter employee number : ");
        cin>>no;
        puts("enter employee name : ");
        cin>>name;
        
        fout<<no<<" "<<name<<endl;
        fout.close();
    }

    void searchEmployee(string a)
    {
        ifstream fin;
        fin.open("file.txt");
        int f=1;
        while(!fin.eof())
        {
            fin>>no;
            fin>>name;
            if(!a.compare(name)){
                cout<<"No.-> "<<no<<endl;
                cout<<"Name-> "<<name<<endl;
                break;
                f=0;
            }

            if(f)
            puts("Employee not found");

             
        }
        fin.close();
    }

    void printEmployee()
    {
        ifstream fin;
        fin.open("file.txt");

        while(!fin.eof()){
            fin>>no;
            fin>>name;
            cout<<no<<" "<<name<<endl;
        }

        fin.close();

    }


};

int main()
{
    Employee e;
    int choice;

    while(true)
    {
        puts("1. Add Employee");
        puts("2. Search Employee");
        puts("3. Print all Employee");
        cin>>choice;

        switch(choice)
        {
            case 1:
            e.addEmployee();
            break;
            case 2:
            puts("enter Employee name : ");
            string s;
            cin>>s;
            e.searchEmployee(s);
            break;
            // case 3:
            // e.printEmployee();
            // default:
            // exit(0);
        }
    }
    
    return 0;
}

#include<fstream>
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

class INFO
{
   string name;
   string accno;
   int bal;
   
   public:

   void print()
   {
    cout<<"Name-> "<<name<<endl;
    cout<<"Account No.-> "<<accno<<endl;
    cout<<"Balance-> "<<bal<<endl;
    puts("#######################################");

   }

   void displayRecord()
   {
     ifstream fin;
     fin.open("file.txt");

     while(!fin.eof())
     {
        fin.ignore();
        getline(fin,name);
        getline(fin,accno);
        fin>>bal;

        print();
     }

     fin.close();
   }


   void add()
   {
     puts("enter name ");
     cin.ignore();
     getline(cin,name);
     puts("enter account number ");
     cin.ignore();
     getline(cin,accno);
     puts("enter balance ");
     cin>>bal;

     ofstream fout;
     fout.open("file.txt",ios::app);

     fout<<endl<<name;
     fout<<endl<<accno;
     fout<<endl<<bal;

     fout.close();


   }

   void display()
   {
     ifstream fin;
     fin.open("file.txt");

     while(!fin.eof())
     {
        fin.ignore();
        getline(fin,name);
        getline(fin,accno);
        fin>>bal;

        if(bal>10000)
        cout<<name<<endl;
     }

     fin.close();
   }

   
};

int main()
{
    INFO i;
    int choice;
    
    while(true)
    {
        puts("1. Add a Record ");
        puts("2. Display Content ");
        puts("3. Diplay name of person having balance>10000");
        puts("4. for exit");
        cin>>choice;
        switch(choice)
        {
            case 1:
            i.add();
            break;
            case 2:
            i.displayRecord();
            break;
            case 3:
            i.display();
            break;
            default:
            return 0;
        }
       

    }
    return 0;
}
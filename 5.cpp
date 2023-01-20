#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   ifstream fin;
   fin.open("a.txt");
   ofstream fout;
   fout.open("file.txt",ios::app);
   string s;
   while(!fin.eof())
   {
    getline(fin,s);
    fout<<s;
    fout<<endl;
   }

   fin.close();
   fout.close();
   return 0;
   


}